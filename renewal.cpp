#include <iostream>
#include "renewal.h"
#include "MainMenu.h"
#include "colors.hpp"
#include "struct.h"
#include <map>
#include "userData.h"

using namespace std;

extern string username;
extern struct users;
extern map <string, users> specific;
int card;
int code;
int oneYear = 400;
int threeYear = 1000;
extern int answer;
extern int price;
int renewalCount = 0;

void renewalPricing(int a) {
    if (a == 1) {
        price += oneYear;
    }
    else if (a == 2) {
        renewalCount++;
        price += threeYear;
    }
}

void renewal() {
   
    cout << "Renewal" << endl << endl; spacing(); yellow();

    cout << "This is where you can renew your insurance in case it goes out of date, causing your insurance to cancel" << endl << endl; spacing(); red();
    cout << "Below are the details associated with the account " << specific[username].username << endl << endl; spacing(); yellow();
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl; spacing(); red();
    cout << "Policy Number: " << specific[username].policy_number << endl;    spacing(); yellow();
    cout << "Contact Details: " << specific[username].phone << endl << endl; spacing(); red();
    

   
    cout << "Insurance renewed for one year = $" << oneYear << " | Three years = $" << threeYear << endl; spacing(); yellow();

    cout << "Do you wish to renew your insurance?(1. = Yes | 2. = No)" << endl; spacing(); red();
    cin >> answer;
    spacing(); yellow();
    if (answer == 1) {
        cout << "Do you wish to renew for one or three years?(1. = One | 2. = Three)" << endl; spacing(); red();
        cin >> answer;
        renewalPricing(answer); spacing(); yellow();
        cout << "Enter 8 digit credit card number: ";

        cin >> card;
        while (card < 10000000 || card > 99999999) {
            spacing(); red();
            cout << "Incorrect" << endl; spacing(); yellow();
            cout << "Enter a 8 digit credit card number: "; red();
            cin >> card;
            
        }

        cin.ignore();
        spacing();
        cout << "Three digit credit card code: "; yellow();

        cin >> code; 
        while (code < 100 || code > 999) {
            spacing(); red();
            cout << "Incorrect" << endl; spacing(); yellow();
            cout << "Enter a Three digit card code: "; red();
            cin >> code;
            cout << endl;
        }
        spacing(); yellow();
        cout << "Thank you for your time. Your insurance will be updated once it needs renewed";
        dataRenewal();
    }
    
    options("customer");
}

