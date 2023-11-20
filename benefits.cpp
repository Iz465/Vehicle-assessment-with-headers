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
   
    
    cout << "Benefits" << endl; spacing(); yellow();

    cout << "We have a wide range of discounts for you, your friends and family" << endl << endl; spacing(); yellow();
    for (auto i : benefitsVector) {
        cout << "New Signees get a " << i.newDiscount << "% discount" << endl << endl; spacing(); red();
        cout << "Claiming multiple policies gets you a " << i.multiDiscount << "% discount" << endl << endl; spacing(); yellow();
        cout << "Renewing your insurance gets you a " << i.renewalDiscount << "% discount" << endl << endl; spacing(); red();
        cout << "Reviewing our insurance company gets you a " << i.reviewDiscount << "% discount" << endl << endl; spacing(); yellow();
    }
    options("customer");
}



