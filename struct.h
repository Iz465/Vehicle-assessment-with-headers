#pragma once
#include <iostream>
#include <string>

using namespace std;

struct policyUsers {
    string username;
    string vehicleType;
    string policyType;
    string price;
    string yearlyPrice;


};



struct users {
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
    string authorised;
    string policy_number;

};


struct renewalUsers {
    string username;
    string card;
    string code;
    string price;
    string count;
};

struct claimUsers {
    string username;
    string date;
    string description;

};

struct benefitsUsers {
    string username;
    string newDiscount;
    string multiDiscount;
    string renewalDiscount;
    string reviewDiscount;
};

struct reviewUsers {
    string username;
    string answer;
    string detailedReview;
    string reviewCount;
};