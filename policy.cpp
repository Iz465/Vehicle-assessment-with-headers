
#include <iostream>
#include "policy.h"
#include "colors.hpp"
#include "admin.h"
#include "MainMenu.h"
#include <map>
#include "struct.h"
#include "userData.h"

using namespace std;

extern int answer;
extern string username;
extern struct users;
extern struct policyUsers;
extern map <string, users> specific;
extern map <string, policyUsers> specificPolicy;

int chosenVehicle;
int motorbike = 70;
int car = 80;
int truck = 90;
int boat = 100;
string vehicleType;
int price;
int chosenPolicy;
int fire = 50;
int theft = 50;
int carCrash = 60;
int disastor = 50;
string policyType;
int yearlyPrice;

 void policy() {
     cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "Policy" << endl << endl;
    
    std::cout << colors::bold << colors::blue;
    cout << endl << endl;
    cout << "1. What our insurance covers your vehicles from." << endl << endl;
    cout << "2. Insurance rates " << endl << endl;
    cout << "3. Company Quote " << endl << endl;
    cout << "4. Policy Registration" << endl << endl;
    cout << "0. Main Menu" << endl << endl;
    cin >> answer;
    system("cls");
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    switch (answer) {
    case 1: policy_list(); break;
    case 2: rates(); break;
    case 3: quote(); break;
    case 4: policy_registration(); break;
    case 0: start(); break;
    }

    void admin_process();

    
    options("policy");
}


void policy_list() {
    cout << "Our list of what our insurance provides protection for" << endl << endl;
    cout << "Fire = $50" << endl;
    cout << "Theft = $50" << endl;
    cout << "Car Crash = $60" << endl;
    cout << "Natural Disastor = $50" << endl;




}
void rates() {
    cout << "Insurance Rates" << endl << endl;
    cout << "Motorbikes/Scooters: Monthly = $70" << "\t" << "Yearly = $700" << endl << endl;
    cout << "Cars: Monthly = $80" << "\t" << "Yearly = $800" << endl << endl;
    cout << "Trucks: Monthly = $90" << "\t" << "Yearly = $900" << endl << endl;
    cout << "Boats: Monthly = $100" << "\t" << "Yearly = $1000" << endl << endl;

}

void quote() {
    cout << "Vehicle Insurance Quote" << endl << endl << endl << endl;
    cout << "What type of vehicle do you have? 1. = Motorbike. 2. = Car. 3. = Truck. 4. = Boat ";
    cin >> answer;
    switch (answer) {
    case 1: chosenVehicle = motorbike; vehicleType = "Motorbike"; break;
    case 2: chosenVehicle = car; vehicleType = "Car"; break;
    case 3: chosenVehicle = truck; vehicleType = "Truck"; break;
    case 4: chosenVehicle = boat; vehicleType = "Boat"; break;
    }

    policy_answer();



    vehicle_data();
    dataPolicy();
    policyStruct();

}

void policy_answer() {
    cout << "Which Policy are you applying for? 1. = Fire. 2. = Theft. 3. = Car Crash. 4. = Natural Disastor ";
    cin >> answer;
    switch (answer) {
    case 1: chosenPolicy = fire; policyType = "Fire"; break;
    case 2: chosenPolicy = theft; policyType = "Theft"; break;
    case 3: chosenPolicy = carCrash; policyType = "Car Crash"; break;
    case 4: chosenPolicy = disastor; policyType = "Natural Disastor"; break;
    }
}

void vehicle_data() {
    price += chosenVehicle + chosenPolicy;
    yearlyPrice += price * 10;
 
}

void policy_registration() {
    
    
    cout << "Below are the details associated with the account " << specificPolicy[username].username << endl;
    cout << "Policy Number: " << specific[username].policy_number << endl;
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl;
    cout << "DOB: " << specific[username].birth << endl;
    cout << "Gender: " << specific[username].gender << endl;
    cout << "Phone Number: " << specific[username].phone << endl;
    cout << "Email: " << specific[username].email << endl;
    cout << "Address: " << specific[username].address << endl;
    cout << "Vehicle Code: " << specific[username].vehicle << endl;
    cout << "Vehicle Type: " << specificPolicy[username].vehicleType << endl;
    cout << "Policiy you have applied for: " << specificPolicy[username].policyType << endl;
    cout << "The Price for the insurance you have requested: $" << specificPolicy[username].price << " monthly and $" << specificPolicy[username].yearlyPrice  << " yearly" << endl;

}