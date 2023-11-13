
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "userData.h"
#include "admin.h"
#include <map>
#include "struct.h"
#include <vector>

using namespace std;
fstream myfile;



users information;
policyUsers policyInformation;
renewalUsers renewalInformation;
map <string, users> specific;
map <string, policyUsers> specificPolicy;
map <string, renewalUsers> specificRenewal;
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
extern string policyType;
extern string vehicleType;
extern int price;
extern int yearlyPrice;
extern int code;
extern int card;

vector <users> usersVector;
vector <policyUsers> policyVector;
vector <renewalUsers> renewalVector;

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
            usersVector.push_back(information);

        }

    }

   
    myfile.close();
}

void dataPolicy() {

    myfile.open("policy.txt", ios::app);
    if (myfile.is_open()) {

        myfile << username << ',' << vehicleType << ',' << policyType << ',' << price << ',' << yearlyPrice << endl;

    }
    myfile.close();


}

void policyStruct() {
    myfile.open("policy.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, policyInformation.username, ',');
            getline(currentline, policyInformation.vehicleType, ',');
            getline(currentline, policyInformation.policyType, ',');
            getline(currentline, policyInformation.price, ',');
            getline(currentline, policyInformation.yearlyPrice, ',');

            specificPolicy.insert({ policyInformation.username, policyInformation });
            policyVector.push_back(policyInformation);
                
        }
    }
    myfile.close();
}

void dataRenewal() {
    myfile.open("renewal.txt", ios::app);
    if (myfile.is_open()) {

        myfile << username << ',' << card << ',' << code << endl;

    }
    myfile.close();



}

void renewalStruct() {
    myfile.open("renewal.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, renewalInformation.username, ',');
            getline(currentline, renewalInformation.card, ',');
            getline(currentline, renewalInformation.code, ',');
           

            specificRenewal.insert({ renewalInformation.username, renewalInformation });
            renewalVector.push_back(renewalInformation);
        }
    }
    myfile.close();



}