#include <iostream>
#include "benefits.h"
#include "colors.hpp"
#include "MainMenu.h"
#include "struct.h"
#include "userData.h"
#include <vector>
#include "admin.h"

using namespace std;

extern vector<benefitsUsers> benefitsVector;

void benefits() {
    benefitsVector.clear();
    benefitsStruct();
   
    cout << endl << endl << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    cout << "Benefits" << endl;
    std::cout << colors::bold << colors::yellow;
    cout << "We have a wide range of discounts for you, your friends and family" << endl << endl;
    for (auto i : benefitsVector) {
        cout << "New Signees get a " << i.newDiscount << "% discount" << endl << endl;
        cout << "Claiming multiple policies gets you a " << i.multiDiscount << "% discount" << endl << endl;
        cout << "Renewing your insurance gets you a " << i.renewalDiscount << "% discount" << endl << endl;
        cout << "Reviewing our insurance company gets you a " << i.reviewDiscount << "% discount" << endl << endl;
    }
    options("customer");
}



