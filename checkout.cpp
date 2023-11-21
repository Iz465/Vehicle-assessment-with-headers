#include <iostream>
#include "checkout.h"
#include "struct.h"
#include "userData.h"
#include <map>
#include "MainMenu.h"
#include <vector>
using namespace std;

extern string username;
extern struct renewalUsers;
extern struct users;
extern struct reviewUsers;
extern map <string, users> specific;
extern map <string, policyUsers> specificPolicy;
extern map <string, renewalUsers> specificRenewal;
extern map <string, benefitsUsers> specificBenefits;
extern map <string, reviewUsers> specificReview;
extern vector <renewalUsers> renewalVector;
extern benefitsUsers benefitsInformation;
extern policyUsers policyInformation;
extern reviewUsers reviewInformation;

float newRenewalDiscount;
float newReviewDiscount;
float a;
float b;
float c;
float d;
float discountedPrice;
float discountedAdded;

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

	discountedPrice = a + b;
	

	if (specificRenewal[username].count != "") {
		
		c = stoi(benefitsInformation.renewalDiscount);
		newRenewalDiscount = c / 100;
	
		
	}
	else {
		c = 0;
	}

	if (specificReview[username].reviewCount == "true") {

		d = stoi(benefitsInformation.reviewDiscount);
		newReviewDiscount = d / 100;
	


	}
	else {
		d = 0;
	}
	discountedAdded = newRenewalDiscount + newReviewDiscount;
	discountedPrice = discountedPrice - (discountedPrice * discountedAdded);

	cout << discountedPrice << endl;
	
}


void checkingOut() {
	


	cout << "Checkout" << endl << endl; spacing(); yellow();
	cout << "The current price for your insurance claim is $"; policyPrice(); spacing(); red();
	cout << "The current price for your renewal is $"; renewalPrice(); spacing(); yellow();
	int final = a + b;
	cout << "The overall price is $" << final << endl; spacing(); red();

	cout << "With discounts the price becomes $"; discounts(); spacing(); yellow();
	

	options("customer");
}

