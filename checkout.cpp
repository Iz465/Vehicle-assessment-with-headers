#include <iostream>
#include "checkout.h"
#include "struct.h"
#include "userData.h"
#include <map>
#include "MainMenu.h"
#include <vector>
using namespace std;

extern string username;

extern map <string, policyUsers> specificPolicy;
extern map <string, renewalUsers> specificRenewal;
extern vector <renewalUsers> renewalVector;



void checkingOut() {
	int a = stoi(specificRenewal[username].price);
	int b = stoi(specificPolicy[username].price);
	int final = a + b;
	cout << "Checkout" << endl << endl;
	cout << "The current price for your insurance claim is $" << specificPolicy[username].price << endl;
	cout << "The current price for your renewal is $" << specificRenewal[username].price << endl;
	cout << "The overall price is $" << final << endl;

	cout << "With discounts the price becomes $" << endl;

	options("customer");
}

