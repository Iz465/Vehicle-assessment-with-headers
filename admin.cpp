
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

 extern map <string, users> specific;
 extern string username;
 extern int answer;
 extern map <string, renewalUsers> specificRenewal;
 extern vector <policyUsers> policyVector;
 extern vector <users> usersVector;
 extern vector <renewalUsers> renewalVector;
 extern map <string, policyUsers> specificPolicy;
 extern vector <claimUsers> claimVector;
 extern map <string, claimUsers> specificClaim;
 int counting = 0;

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

void countingNum() {
    counting++;
    if (counting % 2 == 0) {
        cout << colors::yellow;
    }
    else {
        cout << colors::red;

    }
}


void customerReport() {
    policyVector.clear();
    policyStruct();
    cout << "Customer Report" << endl << endl;
    cout << colors::yellow;
    cout << "Below are our customers who have submitted their insurance claims" << endl << endl;
    
    for (auto i : policyVector) {
        countingNum();
        cout << "Username: " << i.username << " | Vehicle Type: " << i.vehicleType << " | Policy they are claiming: " << i.policyType << endl;
    }
    
}

void registrationReport() {
    usersVector.clear();
    makingStruct();
    cout << "Registration Report" << endl << endl; 
    cout << colors::yellow;    
    cout << "Below is all the information involving users who have registrated" << endl << endl;  
  
    for (auto i : usersVector) {
        cout << endl;
        countingNum();

        cout << "Username: " << i.username << " | Full Name: " << i.first << " " << i.last <<" | Address: " << i.address << " | Phone Number : " << i.phone << " | Policy Number : " << i.policy_number;
        
    }
    

}

void renewalReport() {
    renewalVector.clear();
    renewalStruct();
    cout << "Renewal Report" << endl << endl;
    cout << colors::yellow;
    cout << "Below shows all users who have renewed their insurance" << endl;
    for (auto i : renewalVector) {
        countingNum();
        cout << "Username: " << i.username << endl;

    }
    


}

void claimReport() {
    claimVector.clear();
    claimStruct();
    cout << "Claim Report" << endl << endl;
    cout << colors::yellow;
    cout << "Below shows the specific details of the users who submitted their claim" << endl << endl;
    for (auto i : claimVector) {
        countingNum();
        cout << "Username: " << i.username << " | Date of claim: " << i.date << endl;
        cout << "Description of claim: " << i.description << endl << endl;
    }
}

void admin() {
    system("cls");
    cout << colors::red;
    cout << "\t" << "\t" << "\t" << "\t" << "Welcome " << username << endl << endl;
    cout << colors::yellow;
    cout << "Here are the reports for the company" << endl;
    cout << colors::red;
    cout << "1. Customer Report " << endl;
    cout << colors::yellow;
    cout << "2. Claim Report " << endl;
    cout << colors::red;
    cout << "3. Renewal Report " << endl;
    cout << colors::yellow;
    cout << "4. Weekly New Registration Report " << endl;
    cout << colors::red;
    cout << "5. Updated Policy Information and Special Discounts " << endl;
    cout << colors::yellow;
    cout << "0. Main Menu" << endl;
    cin >> answer;
    system("cls");
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << colors::red;
    switch (answer) {
    case 1: customerReport(); break;
    case 2: claimReport(); break;
    case 3: renewalReport(); break;
    case 4: registrationReport();  break;
    case 5: break;
    case 0: start(); break;
    }
    options("admin");
}




void adminLogin() {
  cout << colors::red;
    cout << "Admin" << endl << endl;
    cout << colors::yellow;
    makingStruct();
    loggingin();
    if (specific[username].authorised == "true") {
        admin();

    }
    else {
        cout << "Only admins are allowed here" << endl << endl;
        
    }
    options("main");
}

