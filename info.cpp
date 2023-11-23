#include <iostream>
#include "info.h"
#include "MainMenu.h"
#include "customer.h"

using namespace std;

void info() {
    cout << "Auckland Vehicle Insurance Company Info" << endl << endl; spacing(); yellow();
    cout << "Our Phone Number: 111092111" << endl; spacing(); red();
    cout << "Our Email: AucklandVehicleInsurance@gmail.com" << endl; spacing(); yellow();
    cout << "Our Address: 15 Old Road Birkenhead Auckland" << endl; spacing(); red();
    cout << "We are open during: Monday - Friday. 8:00 AM - 4:00 PM" << endl; spacing(); yellow();
    options("main");
}


