
#include <iostream>
#include "userData.h"
#include "customer.h"
#include "MainMenu.h"
#include "struct.h"
#include <map>
using namespace std;

 string authorised;
 string admin_code;
 extern struct users;
 extern map <string, users> specific;
 extern string username;

char administrator;

void admin_process() {
    cout << "Are you an Admin? (N) or (Y)";
    cin >> administrator;
   
    if (administrator == 'Y') {
        cout << "Please enter the admin code" << endl;
        cin >> admin_code;
        if (admin_code == "54vehiclesflying") {
            authorised = "true";
        }
        else {
            authorised = "false";
        }
    }
    else {
        authorised = "false";
    }
}

void admin() {
    cout << "Admin" << endl << endl;
    makingStruct();
    loggingin();
    if (specific[username].authorised == "true") {
        system("cls");
        cout << "Welcome " << username << endl << endl;
        cout << "Here are the reports for the company" << endl;
        cout << "Customer Report: " << endl;
        cout << "Weekly Report: " << endl;
        cout << "Weekly Renewal Report: " << endl;
        cout << "Weekly New Registration Report: " << endl;
        cout << "Updated Policy Information and Special Discounts: " << endl;


    }
    else {
        cout << "Only admins are allowed here" << endl;
    }
    mainmenu();
}