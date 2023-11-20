#include <iostream>
#include <string>
#include "MainMenu.h"
#include "colors.hpp"
#include "registration.h"
#include "customer.h"
#include "admin.h"
#include "policy.h"
#include "info.h"


using namespace std;

  int answer;


  void spacing() {
      cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
  }

  void red() {
      std::cout << colors::bold << colors::red;
  }

  void yellow() {
       std::cout << colors::bold << colors::yellow;
  }

void start() {


    system("cls");
    red();
 

                                                 
                        
                                                 




    cout << endl << endl;
    spacing();

    cout << "Auckland Vehicle Insurance" << endl << endl;

    spacing();
    yellow();
    cout << "1. Registration" << endl; spacing(); red();
    cout << "2. Customer Login" << endl; spacing(); yellow();
    cout << "3. Administrator Login" << endl; spacing(); red();
    cout << "4. Insurance Company Info" << endl; spacing(); yellow();
    cout << "5. Exit" << endl; spacing(); red();
    cin >> answer;
    system("cls");
    cout << endl << endl; spacing(); 
    switch (answer) {
    case 1:registration(); break;
    case 2:customer(); break;
    case 3:adminLogin(); break;
    case 4:info(); break;
    case 5: exit(0); break;
    }

}

void normalSize() {

    CONSOLE_FONT_INFOEX normal;
    normal.cbSize = sizeof(normal);
    normal.dwFontSize.Y = 20;



    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &normal);
}










void options(string a) {

    cout << endl << endl; spacing();
    cout << colors::red;
    cout << "0. Exit to " << a << " Menu" << endl; spacing();
    cin >> answer;
    
    switch (answer) {
    case 0: if (a == "main") {
        start(); break;
    }
          if (a == "customer") {
              customer_Menu(); break;
          }
          if (a == "admin") {
              admin(); break;
          }
          if (a == "policy") {
              system("cls");
              policy(); break;
          }

    }
}