
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
 extern vector <benefitsUsers> benefitsVector;
 extern map <string, reviewUsers> specificReview;
 extern vector <reviewUsers> reviewVector;
 int counting = 0;
 int newDiscount = 0;
 int multiDiscount = 0;
 int renewalDiscount = 0;
 int reviewDiscount = 0;
char administrator;

void admin_process() {
    
    cout << "Are you an Admin? (N) or (Y)"; yellow();
    cin >> administrator; spacing(); 
   
    if (administrator == 'Y') {
        cout << "Please enter the admin code" << endl; spacing(); red();
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
    cout << "Customer Report" << endl << endl; spacing(); yellow();   
    cout << "Below are our customers who have submitted their insurance claims" << endl << endl; 
    
    for (auto i : policyVector) {
        countingNum();
        spacing();
        cout << "Username: " << i.username << " | Vehicle Type: " << i.vehicleType << " | Policy they are claiming: " << i.policyType << endl;
    }
    
}

void registrationReport() {
    usersVector.clear();
    makingStruct();
    cout << "Registration Report" << endl << endl; spacing(); yellow();   
    cout << "Below is all the information involving users who have registrated" << endl << endl; 
  
    for (auto i : usersVector) {
       
        countingNum();
        spacing();
        cout << "Username: " << i.username << " | Full Name: " << i.first << " " << i.last << " | Address: " << i.address << " | Phone Number : " << i.phone << " | Policy Number : " << i.policy_number << endl;
        
    }
    

}
void renewalReport() {
    renewalVector.clear();
    renewalStruct();
    cout << "Renewal Report" << endl << endl; spacing(); yellow();
    
    cout << "Below shows all users who have renewed their insurance" << endl << endl; 
    for (auto i : renewalVector) {
        countingNum();
        spacing();
        cout << "Username: " << i.username << " | renewal time applied for: ";
        if (i.count == "") {
            cout << "One year " << endl;
        }
        else {
            cout << "Three years" << endl;
        }
      
    }
    


}

void claimReport() {
    claimVector.clear();
    claimStruct();

    cout << "Claim Report" << endl << endl; spacing(); yellow();
    cout << "Below shows the specific details of the users who submitted their claim" << endl << endl; 
    for (auto i : claimVector) {
        countingNum();
        spacing();
        cout << "Username: " << i.username << " | Date of claim: " << i.date << endl; spacing();
        cout << "Description of claim: " << i.description << endl << endl;
    }
}

void reviewReport() {
    reviewVector.clear();
    reviewStruct();
    cout << "Review Report" << endl << endl; spacing(); yellow();
    cout << "Below shows all users who have submitted a report" << endl << endl;
    for (auto i : reviewVector) {
        countingNum();
        spacing();
        cout << "Username: " << i.username << " | Review Rating: " << i.answer << endl; spacing();
        cout << "Description of their review: " << i.detailedReview << endl << endl;
    }



}



void discountReport() {
    benefitsStruct();
    cout << "Special Discounts" << endl << endl; spacing(); yellow();
    cout << "Here you can decide the % for our discounts" << endl << endl; 
    int benefitsCount = 0;
    
    for (auto i : benefitsVector) {
        benefitsCount++;
        if (benefitsCount == 1) {
          
            spacing(); red();
            cout << "These are our current discount prices" << endl << endl; spacing(); yellow();
            cout << "New Signee Discounts = " << i.newDiscount << "%" << endl; spacing(); red();
            cout << "Multi Policy Discounts = " << i.multiDiscount << "%" << endl; spacing(); yellow();
            cout << "Renewal Discounts = " << i.renewalDiscount << "%" << endl; spacing(); red();
            cout << "Review Discounts = " << i.reviewDiscount << "%" << endl; spacing(); yellow();
        }
    }

    cout << "Would you like to update the discounts?(1. = Yes | 2. = No) " << endl; spacing(); red();
    cin >> answer;

    if (answer == 1) {
        system("cls");
        cout << endl << endl; spacing();
        cout << "New Sign-Up Discounts % = "; cin >> newDiscount; spacing(); yellow();
        cout << "Multi Policy Discounts % = "; cin >> multiDiscount; spacing(); red();
        cout << "Renewal Discount % = "; cin >> renewalDiscount; spacing(); yellow();
        cout << "Discount for reviewing our Insurance % = "; cin >> reviewDiscount; spacing(); red();
        dataBenefits();
        system("cls");
        cout << endl << endl; spacing(); yellow();
        cout << "Discounts have been updated. Thank you" << endl << endl;
    }
    else {

    }
}

void admin() {
    system("cls");
    cout << endl << endl; spacing();
    cout << "Welcome " << username << endl << endl; spacing(); yellow();
    cout << "Here are the reports for the company" << endl << endl;  spacing(); red();
    cout << "1. Customer Report " << endl; spacing(); yellow();
    cout << "2. Claim Report " << endl; spacing(); red();
    cout << "3. Renewal Report " << endl; spacing(); yellow();
    cout << "4. Registration Report " << endl; spacing(); red();
    cout << "5. Review Report" << endl; spacing(); yellow();
    cout << "6. Updated Policy Information and Special Discounts " << endl; spacing(); red();
    cout << "0. Main Menu" << endl; spacing(); yellow();
    cin >> answer;
    system("cls");

    cout << endl << endl; spacing(); red();
    switch (answer) {
    case 1: customerReport(); break;
    case 2: claimReport(); break;
    case 3: renewalReport(); break;
    case 4: registrationReport();  break;
    case 5: reviewReport();  break;
    case 6: discountReport(); break;
    case 0: start(); break;
    }
    options("admin");
}




void adminLogin() {
  
    cout << "Admin" << endl << endl; spacing(); yellow();
    
    makingStruct();
    loggingin();
    if (specific[username].authorised == "true") {
        system("cls");

        cout << endl << endl; spacing();  cout << "Logging in.....";
        Sleep(1500);
        system("cls");
        admin();

    }
    else {
        cout << "Only admins are allowed here" << endl << endl;
        
    }
    options("main");
}

