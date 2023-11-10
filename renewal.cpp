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
void renewal() {
    cout << "Renewal" << endl << endl;
    std::cout << colors::bold << colors::blue;
    cout << "This is where you can renew your insurance in case it goes out of date, causing your insurance to cancel" << endl << endl;
    cout << "Below are the details associated with the account " << specific[username].username << endl << endl;
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl;
    cout << "Policy Number: " << specific[username].policy_number << endl;    
    cout << "Contact Details: " << specific[username].phone << endl << endl;
    

   // cout << "Would you like to renew your insurance"
    cout << "Your Vehicle number " << specific[username].vehicle << " does not need to be renewed for another three years as all new vehicles that sign up with our insurance get insurance for three years." << endl;
    cout << "Once those three years are up you will need to renew your vehicle every year.";
    cout << "You can enter your card details for us to update your insurance once the three years are up." << endl << endl;
    cout << "Enter credit card number: ";
   
    cin >> card;
    while (card < 10000000 || card > 99999999) {
        cout << "Incorrect" << endl;
        cout << "Enter a 8 digit card number: ";
        cin >> card;
        cout << endl;
    }
   
    cin.ignore();
       
        cout << "Three digit card code: ";
        
        cin >> code;
        while (code < 100 || code > 999) {
            cout << "Incorrect" << endl;
            cout << "Enter a Three digit card code: ";
            cin >> code;
            cout << endl;
        }
        cout << "Thank you for your time. You're insurance will be updated once it needs renewing";
        dataRenewal();
  
    customer_Options();
}