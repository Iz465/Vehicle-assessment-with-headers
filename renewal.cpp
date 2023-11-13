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
int oneyear = 400;
extern int answer;

void renewal() {
    cout << "Renewal" << endl << endl;
    std::cout << colors::bold << colors::yellow;
    cout << "This is where you can renew your insurance in case it goes out of date, causing your insurance to cancel" << endl << endl;
    cout << "Below are the details associated with the account " << specific[username].username << endl << endl;
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl;
    cout << "Policy Number: " << specific[username].policy_number << endl;    
    cout << "Contact Details: " << specific[username].phone << endl << endl;
    

   
    cout << "Insurance renewed for one year = " << oneyear << endl; 

    cout << "Do you wish to renew your insurance?(1. = Yes | 2. = No)" << endl;
    cin >> answer;
    
    if (answer == 1) {

        cout << "Enter 8 digit credit card number: ";

        cin >> card;
        while (card < 10000000 || card > 99999999) {
            cout << "Incorrect" << endl;
            cout << "Enter a 8 digit credit card number: ";
            cin >> card;
            cout << endl;
        }

        cin.ignore();

        cout << "Three digit credit card code: ";

        cin >> code;
        while (code < 100 || code > 999) {
            cout << "Incorrect" << endl;
            cout << "Enter a Three digit card code: ";
            cin >> code;
            cout << endl;
        }
        cout << "Thank you for your time. Your insurance will be updated once it needs renewed" << endl << endl;
        dataRenewal();
    }
    
    customer_Options();
}