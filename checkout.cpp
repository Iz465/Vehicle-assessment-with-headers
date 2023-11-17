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
int a;
int b;
int c;
int d;
int discountedPrice;

void renewalPrice() {
	if (specificRenewal[username].price != "") {
		b = stoi(specificRenewal[username].price);

		

	}
	else {
		b = 0;
	}
	cout << b << endl;
}

void policyPrice() {
	if (specificPolicy[username].price != "") {


		a = stoi(specificPolicy[username].price);

	}
	else {
		a = 0;
	}
	cout << a << endl;

}

void discounts() {

	c = stoi(specificRenewal[username].count);

	if (c != 0) {
		b = b * 0.8;
	}

	
	discountedPrice = a + b;
	cout << discountedPrice << endl;

}


void checkingOut() {
	

	cout << "Checkout" << endl << endl;
	cout << "The current price for your insurance claim is $"; policyPrice();
	cout << "The current price for your renewal is $"; renewalPrice();
	int final = a + b;
	cout << "The overall price is $" << final << endl;

	cout << "With discounts the price becomes $"; discounts();
	

	options("customer");
}

