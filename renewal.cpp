#include <iostream>
#include "renewal.h"
#include "MainMenu.h"
#include "colors.hpp"

using namespace std;

void renewal() {
    cout << "Renewal" << endl << endl;
    std::cout << colors::bold << colors::blue;
    cout << "Here you can check out your renewal" << endl;
    customer_Options();
}