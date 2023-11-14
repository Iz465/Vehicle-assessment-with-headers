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
    cout << "Claim" << endl << endl;
    std::cout << colors::bold << colors::blue;
    cout << "Here you can register for your claim" << endl;
    cout << "Below are the details associated with the account " << specific[username].username << endl << endl;
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl;
    cout << "Contact Details: " << specific[username].phone << endl;
    cout << "Policy Number: " << specific[username].policy_number << endl;
   // cout << "Vehicle: " << specific[username].vehicleType << endl;
   // cout << "Insurance Claim Problem: " << specific[username].chosenPolicy << endl << endl;
    
  //  cout << "Please give the date and a description of the " << specific[username].chosenPolicy << endl << endl;
    cout << "Date: ";
    cin.ignore();
    getline(cin, date);
    cout << "What caused the " << specificPolicy[username].policyType << "?" << endl;
    getline(cin, description);
    system("cls");
    std::cout << colors::red;
    dataClaim();
    cout << "\n" << endl << "\t" << "\t" << "We will review your claim. Thank you for your time" << endl;
    
    options("customer");
}