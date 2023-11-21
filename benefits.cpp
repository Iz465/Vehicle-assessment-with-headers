#include <iostream>
#include "benefits.h"
#include "colors.hpp"
#include "MainMenu.h"
#include "struct.h"
#include "userData.h"
#include <vector>
#include "admin.h"

using namespace std;


extern benefitsUsers benefitsInformation;

void benefits() {
  
    
   
    
    cout << "Benefits" << endl; spacing(); yellow();

    cout << "We have a wide range of discounts for you, your friends and family" << endl << endl; spacing(); yellow();
   
        cout << "New Signees get a " << benefitsInformation.newDiscount  << "% discount" << endl << endl; spacing(); red();
        cout << "Claiming multiple policies gets you a " << benefitsInformation.multiDiscount << "% discount" << endl << endl; spacing(); yellow();
        cout << "Renewing your insurance gets you a " << benefitsInformation.renewalDiscount << "% discount" << endl << endl; spacing(); red();
        cout << "Reviewing our insurance company gets you a " << benefitsInformation.reviewDiscount << "% discount" << endl << endl; spacing(); yellow();
  
    options("customer");
}



