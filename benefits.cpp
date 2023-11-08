#include <iostream>
#include "benefits.h"
#include "colors.hpp"
#include "MainMenu.h"

using namespace std;

void benefits() {
    cout << "Benefits" << endl;
    std::cout << colors::bold << colors::blue;
    cout << "We have a wide range of discounts for you, your friends and family" << endl << endl;
    cout << "Our new sign - up discounts will give every new signee a 20% discount on our car insurance for six months" << endl << endl;
    cout << "Our multi policy discounts will apply to any user who has two or more insurance policies with us and it will grant you a 20% discount on your insurance." << endl << endl;

    customer_Options();
}



