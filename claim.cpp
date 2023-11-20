#include <iostream>
#include "claim.h"
#include "colors.hpp"
#include "MainMenu.h"
#include "struct.h"
#include <map>
#include "userData.h"
using namespace std; 

extern struct users;
extern map <string, users> specific;
extern struct policyUsers;
extern map <string, policyUsers> specificPolicy;
extern string username;
string date;
string description;
void claim() {
    cout << "Claim" << endl << endl; spacing(); yellow();
    
    cout << "Here you can register for your claim" << endl; spacing(); red();
    cout << "Below are the details associated with the account " << specific[username].username << endl << endl; spacing(); yellow();
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl; spacing(); red();
    cout << "Contact Details: " << specific[username].phone << endl; spacing(); yellow();
    cout << "Policy Number: " << specific[username].policy_number << endl; spacing(); red();
   // cout << "Vehicle: " << specific[username].vehicleType << endl;
   // cout << "Insurance Claim Problem: " << specific[username].chosenPolicy << endl << endl;
    
    cout << "Please give the date and description of the " << specificPolicy[username].policyType << endl<< endl; spacing(); yellow();
    cout << "Please enter the date the " << specificPolicy[username].policyType << " occurred: "; red();
    cin.ignore();
    getline(cin, date); spacing(); 
    cout << "What caused the " << specificPolicy[username].policyType << "?" << endl; spacing(); yellow();
    getline(cin, description); 
    system("cls");
    cout << endl << endl; spacing();
    dataClaim();
    cout << "We will review your claim. Thank you for your time" << endl; 
    
    options("customer");
}