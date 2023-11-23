
#include <iostream>
#include "policy.h"
#include "colors.hpp"
#include "admin.h"
#include "MainMenu.h"
#include <map>
#include "struct.h"
#include "userData.h"
#include "customer.h"

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
int chosenPolicy2;
int fire = 50;
int theft = 50;
int carCrash = 60;
int disastor = 50;
string policyType;
string policyType2;
string multiplePolicy;

int yearlyPrice;
int policyCount = 0;

 void policy() {
     cout << endl << endl; spacing();
     cout << "Policy" << endl << endl; spacing(); yellow();
    
    
    
     cout << "1. What our insurance covers your vehicles from." << endl; spacing(); yellow();
    cout << "2. Insurance rates " << endl; spacing(); yellow();
    cout << "3. Company Quote " << endl; spacing(); yellow();
    cout << "4. Policy Registration" << endl; spacing(); yellow();
    cout << "0. Customer Menu" << endl; spacing(); yellow(); 
    cin >> answer;
    system("cls");
    cout << endl << endl; spacing(); red();
    switch (answer) {
    case 1: policy_list(); break;
    case 2: rates(); break;
    case 3: quote(); break;
    case 4: policy_registration(); break;
    case 0: customer_Menu(); break;
    }

    void admin_process();

    
    options("policy");
   
}


void policy_list() {
    cout << "Our list of what our insurance provides protection for" << endl << endl; spacing(); yellow();
    cout << "Fire = $50" << endl; spacing(); red();
    cout << "Theft = $50" << endl; spacing(); yellow();
    cout << "Car Crash = $60" << endl; spacing(); red();
    cout << "Natural Disastor = $50" << endl; spacing(); yellow();




}
void rates() {
    cout << "Insurance Rates" << endl << endl; spacing(); yellow();
    cout << "Motorbikes/Scooters: Monthly = $70" << "\t" << "Yearly = $700" << endl; spacing(); red();
    cout << "Cars: Monthly = $80" << "\t" << "Yearly = $800" << endl; spacing(); red();
    cout << "Trucks: Monthly = $90" << "\t" << "Yearly = $900" << endl; spacing(); red();
    cout << "Boats: Monthly = $100" << "\t" << "Yearly = $1000" << endl; spacing(); red();

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
        spacing();
        cout << "Would you like to apply for another policy?(1. = Yes | 2. = No)"; cin >> answer;
        spacing();
        if (answer == 1) {
            cout << policyType << endl;
            cout << "Which Policy are you applying for? 1. = Fire. 2. = Theft. 3. = Car Crash. 4. = Natural Disastor ";
            cin >> answer;
            switch (answer) {

            case 1: chosenPolicy2 = fire; policyType2 = "Fire"; break;
            case 2: chosenPolicy2 = theft; policyType2 = "Theft"; break;
            case 3: chosenPolicy2 = carCrash; policyType2 = "Car Crash"; break;
            case 4: chosenPolicy2 = disastor; policyType2 = "Natural Disastor"; break;
            }
            
           if (policyType2 == policyType) {
                chosenPolicy2 = 0; policyType2 = "";
            }
           
        }
}







void quote() {
    cout << "Vehicle Insurance Quote" << endl << endl << endl << endl; spacing(); yellow();
    cout << "What type of vehicle do you have? 1. = Motorbike. 2. = Car. 3. = Truck. 4. = Boat "; 
    cin >> answer;
    cout << endl << endl; spacing(); red();
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




void vehicle_data() {
    price += chosenVehicle + chosenPolicy + chosenPolicy2;
    yearlyPrice += price * 10;
    
}

void policy_registration() {
    
    
    cout << "Below are the details associated with the account " << specificPolicy[username].username << endl << endl; spacing(); yellow();
    cout << "Policy Number: " << specific[username].policy_number << endl; spacing(); red();
    cout << "Name: " << specific[username].first << " " << specific[username].last << endl; spacing(); yellow();
    cout << "DOB: " << specific[username].birth << endl; spacing(); red();
    cout << "Gender: " << specific[username].gender << endl; spacing(); yellow();
    cout << "Phone Number: " << specific[username].phone << endl; spacing(); red();
    cout << "Email: " << specific[username].email << endl; spacing(); yellow();
    cout << "Address: " << specific[username].address << endl; spacing(); red();
    cout << "Vehicle Code: " << specific[username].vehicle << endl; spacing(); yellow();
    cout << "Vehicle Type: " << specificPolicy[username].vehicleType << endl; spacing(); red();
    cout << "Policies you have applied for: " << specificPolicy[username].policyType << ". " << specificPolicy[username].policyType2 << endl; spacing(); yellow();
    cout << "The Price for the insurance you have requested: $" << specificPolicy[username].price << " monthly and $" << specificPolicy[username].yearlyPrice << " yearly";

}