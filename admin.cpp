
#include <iostream>
#include "userData.h"
#include "customer.h"
#include "MainMenu.h"
#include "struct.h"
#include <map>
#include "colors.hpp"
#include <vector>
#include "userData.h"
using namespace std;

 string authorised;
 string admin_code;
 extern struct users;
 extern map <string, users> specific;
 extern string username;
 extern int answer;
 extern struct policyUsers;
 extern map <string, policyUsers> specificPolicy;
 extern vector <policyUsers> policyVector;

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


void customerReport() {
    policyStruct();
    cout << "Customer Report" << endl << endl;
    cout << colors::blue;
    cout << "Below are our customers who have submitted their insurance claims" << endl;
    for (auto i : policyVector) {
        
        cout << "Username: " << i.username << " | Vehicle Type: " << i.vehicleType << " | Policy they are claiming: " << i.policyType << endl;
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
        cout << "1. Customer Report " << endl;
        cout << "2. Claim Report " << endl;
        cout << "3. Renewal Report: " << endl;
        cout << "4. Weekly New Registration Report: " << endl;
        cout << "5. Updated Policy Information and Special Discounts: " << endl;
        cin >> answer;
        system("cls");
        cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
        cout << colors::red;
        switch (answer) {
        case 1: customerReport(); break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        }

    }
    else {
        cout << "Only admins are allowed here" << endl << endl;
        
    }
    mainmenu();
}