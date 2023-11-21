
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
claimUsers claimInformation;
benefitsUsers benefitsInformation;
reviewUsers reviewInformation;
map <string, users> specific;
map <string, policyUsers> specificPolicy;
map <string, renewalUsers> specificRenewal;
map <string, claimUsers> specificClaim;
map <string, benefitsUsers> specificBenefits;
map <string, reviewUsers> specificReview;
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
extern string date;
extern string description;
extern int newDiscount;
extern int multiDiscount;
extern int renewalDiscount;
extern int reviewDiscount;
extern string renewalCount;
extern int answer;
extern string reviewCount;
extern string detailedReview;
vector <users> usersVector;
vector <policyUsers> policyVector;
vector <renewalUsers> renewalVector;
vector <claimUsers> claimVector;
vector <benefitsUsers> benefitsVector;
vector <reviewUsers> reviewVector;

int counter = 0;
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
            counter++;
            if (counter < line.size()) {
                usersVector.push_back(information);
            }

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

        myfile << username << ',' << card << ',' << code << ',' << price << ',' << renewalCount << endl;

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
            getline(currentline, renewalInformation.price, ',');
            getline(currentline, renewalInformation.count, ',');
            
         
            specificRenewal.insert({ renewalInformation.username, renewalInformation });
            renewalVector.push_back(renewalInformation);
        }
    }
    myfile.close();



}

void dataClaim() {
    myfile.open("claim.txt", ios::app);
    if (myfile.is_open()) {

        myfile << username << ',' << date << ',' << description << endl;

    }
    myfile.close();

}

void claimStruct() {
    myfile.open("claim.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, claimInformation.username, ',');
            getline(currentline, claimInformation.date, ',');
            getline(currentline, claimInformation.description, ',');


            specificClaim.insert({ claimInformation.username, claimInformation });
            claimVector.push_back(claimInformation);
        }
    }
    myfile.close();


}


void dataBenefits() {
    myfile.open("benefits.txt", ios::out);
    if (myfile.is_open()) {

        myfile << username << ',' << newDiscount << ',' << multiDiscount << ',' << renewalDiscount << ',' << reviewDiscount << endl;

    }
    myfile.close();

}

void benefitsStruct() {
    myfile.open("benefits.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, benefitsInformation.username, ',');
            getline(currentline, benefitsInformation.newDiscount, ',');
            getline(currentline, benefitsInformation.multiDiscount, ',');
            getline(currentline, benefitsInformation.renewalDiscount, ',');
            getline(currentline, benefitsInformation.reviewDiscount, ',');


            specificBenefits.insert({ benefitsInformation.username, benefitsInformation });
            benefitsVector.push_back(benefitsInformation);
        }
    }
    myfile.close();

}

void dataReview() {
    myfile.open("review.txt", ios::app);
    if (myfile.is_open()) {

        myfile << username << ',' << answer << ',' << detailedReview << ',' << reviewCount << endl;

    }
    myfile.close();

}

void reviewStruct() {
    myfile.open("review.txt", ios::in);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream currentline;
            currentline.str(line);
            getline(currentline, reviewInformation.username, ',');
            getline(currentline, reviewInformation.answer, ',');
            getline(currentline, reviewInformation.detailedReview, ',');
            getline(currentline, reviewInformation.reviewCount, ',');


            specificReview.insert({ reviewInformation.username, reviewInformation });
            reviewVector.push_back(reviewInformation);
        }
    }
    myfile.close();
}