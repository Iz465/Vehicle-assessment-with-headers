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
#include "checkout.h"
#include "review.h"

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
    benefitsStruct();
    reviewStruct();
    loggingin();
    
    system("cls");
    cout << endl << endl;
    spacing(); cout << "Logging in.....";
    Sleep(1500);
    system("cls");
    customer_Menu();


}

void loggingin() {

    int count = 0;
   

    
    
    
    cout << "Enter Username: ";
    cin >> username; spacing();  yellow();
    passwordCensor(); spacing();  red();

    while (username != specific[username].username || pass != specific[username].password) {
        count++;
        if (count == 3) {
            cout << "Sorry you have entered the wrong information too many times. Try again later" << endl;
            exit(0);
        }

        cout << "WRONG" << endl; spacing();  yellow();
        cout << "Enter Username: "; 
        cin >> username; spacing();  red();
        passwordCensor(); spacing();  yellow();
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
    cout << endl << endl; spacing(); red();
    
    cout << "Welcome back " << username << ". Please select one of the following options" << endl << endl; spacing(); yellow();
    cout << "1. Our Policy" << endl; spacing();  red();
    cout << "2. Claim registration" << endl; spacing();  yellow();
    cout << "3. Renewal" << endl; spacing();  red();
    cout << "4. Benefits of NZ insurance" << endl; spacing();  yellow();
    cout << "5. Checkout" << endl; spacing();  red();
    cout << "6. Leave a Review" << endl; spacing(); yellow();
    cout << "7. Exit to Main Menu" << endl; spacing(); red();
    cin >> answer;
    system("cls");
    cout << endl << endl; spacing();

    switch (answer) {
      case 1: policy(); break;
      case 2: claim(); break;
      case 3: renewal(); break;
      case 4: benefits(); break;
      case 5: checkingOut(); break;
      case 6: review();
      case 7: start(); break;

    }

}