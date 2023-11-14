#include <iostream>
#include "benefits.h"
#include "colors.hpp"
#include "MainMenu.h"

using namespace std;

void benefits() {
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "Benefits" << endl;
    std::cout << colors::bold << colors::yellow;
    cout << "We have a wide range of discounts for you, your friends and family" << endl << endl;
    cout << "New Signee Discounts =";
    cout << "Multi Policee Discounts =";
    cout << "Renewal Discounts =";
    options("customer");
}



