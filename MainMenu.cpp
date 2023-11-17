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

  void title() {


      cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t";
      cout << " _____\n" << "\t" << "\t" << "\t" << "\t" << "\t"
          "|_   _|\n" << "\t" << "\t" << "\t" << "\t" << "\t"
          "  | |  _ __  ___ _   _ _ __ __ _ _ __   ___ ___\n" << "\t" << "\t" << "\t" << "\t" << "\t"
          "  | | | '_ \\/ __| | | | '__/ _` | '_ \\ / __/ _ \\ \n" << "\t" << "\t" << "\t" << "\t" << "\t"
          " _| |_| | | \\__ \\ |_| | | | (_| | | | | (_|  __/\n" << "\t" << "\t" << "\t" << "\t" << "\t"
          "|_____|_| |_|___/\\__,_|_|  \\__,_|_| |_|\\___\\___|\n" << endl;



  }




void start() {


    system("cls");
    std::cout << colors::bold << colors::red;
    title();

                                                 
                        
                                                 






    // << "Birkenhead Vehicle Insurance" << endl << endl;


    std::cout << colors::bold << colors::yellow;
    cout << "1. Registration" << endl;
    cout << "2. Customer Login" << endl;
    cout << "3. Administrator Login" << endl;
    cout << "4. Insurance Company Info" << endl;
    cout << "5. Exit" << endl;
    cin >> answer;
    system("cls");
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
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

    cout << endl << endl;
    cout << colors::red;
    cout << "0. Exit to " << a << " Menu" << endl;
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