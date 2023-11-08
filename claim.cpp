#include <iostream>
#include "claim.h"
#include "colors.hpp"
#include "MainMenu.h"
using namespace std; 

extern string username;
extern string first;
extern string last, birth, phone, email, address, vehicle;

void claim() {
    cout << "Claim" << endl << endl;
    std::cout << colors::bold << colors::blue;
    cout << "Here you can register for your claim" << endl;
    cout << "Below are the details associated with the account " << username << endl;
    cout << "Name: " << first << " " << last << endl;
    cout << "DOB: " << birth << endl;
    cout << "Phone Number: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address << endl;
    cout << "Vehicle: " << vehicle << endl;

    customer_Options();
}