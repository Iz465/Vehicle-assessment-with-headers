
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
    
    cout << "To sign up please fill in the following details" << endl << endl; yellow();
    cin.ignore();
    spacing(); 
    cout << "First Name: ";
    getline(cin, first); spacing(); red();
    cout << "Last Name: ";
    getline(cin, last); spacing(); yellow();
    cout << "Date of Birth: ";
    getline(cin, birth); spacing(); red();
    cout << "Gender: ";
    getline(cin, gender); spacing(); yellow();
    cout << "Phone Number: ";
    getline(cin, phone); spacing(); red();
    cout << "Email: ";
    getline(cin, email); spacing(); yellow();
    cout << "Home Address: ";
    getline(cin, address); spacing(); red();
    cout << "Vehicle Registration Number: ";
    getline(cin, vehicle); spacing(); yellow();
    cout << "Username: ";
    getline(cin, username); spacing(); red();
    cout << "Password: ";
    getline(cin, password); spacing(); yellow();
    cout << "Please confirm your password: ";
    getline(cin, password1); spacing(); red();



    while (password1 != password) {
        cout << "Error! Passwords not matching" << endl; spacing(); yellow();
        cout << "Password: "; spacing(); red();

        cin >> password;

        cout << "Please confirm your password: "; spacing(); yellow();
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