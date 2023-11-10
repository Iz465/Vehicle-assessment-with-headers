#include <iostream>
#include "customer.h"
#include "userData.h"
#include <map>
#include <string>
#include <conio.h>
#include "struct.h"
#include "colors.hpp"
#include "policy.h"
#include "claim.h"
#include "renewal.h"
#include "benefits.h"
#include "MainMenu.h"

using namespace std;

extern string username;
extern struct users;
extern struct policyUsers;
extern map <string, users> specific;
extern map <string, policyUsers> specificPolicy;
extern int answer;
string pass;


void customer() {

    makingStruct();
    policyStruct();
    renewalStruct();
    loggingin();
    

    customer_Menu();


}

void loggingin() {

    int count = 0;
   

    
    
    
    cout << "Enter Username: ";
    cin >> username;
    passwordCensor();

    while (username != specific[username].username || pass != specific[username].password) {
        count++;
        if (count == 3) {
            cout << "Sorry you have entered the wrong information too many times. Try again later" << endl;
            exit(0);
        }

        cout << "WRONG" << endl;
        cout << "Enter Username: ";
        cin >> username;
        passwordCensor();
    }

}


void passwordCensor() {


    pass = "";
    char ch;
    cout << "Enter Password: ";
    ch = _getch();
    while (ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout << endl;

}

void customer_Menu() {
    system("cls");


    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    std::cout << colors::bold << colors::red;
    cout << "Welcome back " << username << ". Please select one of the following options" << endl << endl;
    std::cout << colors::bold << colors::blue;
    cout << "1. Our Policy" << endl;
    cout << "2. Claim registration" << endl;
    cout << "3. Renewal" << endl;
    cout << "4. Benefits of NZ insurance" << endl;
    cout << "5. Exit to Main Menu" << endl;
    cin >> answer;
    system("cls");
    std::cout << colors::bold << colors::red;
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    switch (answer) {
      case 1: policy(); break;
      case 2: claim(); break;
      case 3: renewal(); break;
      case 4: benefits(); break;
      case 5: start(); break;

    }

}