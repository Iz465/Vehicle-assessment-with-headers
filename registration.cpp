
#include "registration.h"
#include "MainMenu.h"
#include "admin.h"
#include <iostream>
#include <string>
#include "userData.h"
#include <cstdlib>
#include <Windows.h>
using namespace std;

 string first;
 string last;
 string birth;
 string gender;
 string phone;
 string email;
 string address;
 string vehicle;
 string username;
 string password;
 string password1;
 int policy_number;

 


void registration() {

    cout << "To sign up please fill in the following details" << endl << endl;
    cin.ignore();

    cout << "First Name: ";
    getline(cin, first);
    cout << "Last Name: ";
    getline(cin, last);
    cout << "Date of Birth: ";
    getline(cin, birth);
    cout << "Gender: ";
    getline(cin, gender);
    cout << "Phone Number: ";
    getline(cin, phone);
    cout << "Email: ";
    getline(cin, email);
    cout << "Home Address: ";
    getline(cin, address);
    cout << "Vehicle Registration Number: ";
    getline(cin, vehicle);
    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);
    cout << "Please confirm your password: ";
    getline(cin, password1);



    while (password1 != password) {
        cout << "Error! Passwords not matching" << endl;
        cout << "Password: ";

        cin >> password;

        cout << "Please confirm your password: ";
        cin >> password1;
    }

    admin_process();
    srand(time(0));
   policy_number = rand() % 10000;
    data();
    system("cls");
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "Registering your account...";
    Sleep(1500);

    start();


}