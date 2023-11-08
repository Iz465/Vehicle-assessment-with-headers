
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "userData.h"
#include "admin.h"
#include <map>
#include "struct.h"

using namespace std;
fstream myfile;



users information;

map <string, users> specific;

extern string first;
extern string last;
extern string birth;
extern string gender;
extern string phone;
extern string email;
extern string address;
extern string vehicle;
extern string username;
extern string password;
extern string authorised;
extern int policy_number;

string line;

void data() {

    myfile.open("insurance.txt", ios::app);
    if (myfile.is_open()) {

        myfile << first << "," << last << "," << birth << "," << gender << "," << phone << "," << email << "," << address << "," << vehicle << "," << username << "," << password << "," << authorised << ',' << policy_number << endl;





    }
    myfile.close();

}

void makingStruct() {
    myfile.open("insurance.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, information.first, ',');
            getline(currentline, information.last, ',');
            getline(currentline, information.birth, ',');
            getline(currentline, information.gender, ',');
            getline(currentline, information.phone, ',');
            getline(currentline, information.email, ',');
            getline(currentline, information.address, ',');
            getline(currentline, information.vehicle, ',');
            getline(currentline, information.username, ',');
            getline(currentline, information.password, ',');
            getline(currentline, information.authorised, ',');
            getline(currentline, information.policy_number, ',');





            specific.insert({ information.username, information });

        }

    }

   
    myfile.close();
}