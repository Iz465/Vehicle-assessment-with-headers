

#include <iostream>
#include "review.h"
#include "MainMenu.h"
#include <string>

using namespace std;

extern int answer;

string rating;
string reviewing;
string detailedReview;

    void review() {
        cout << "Review" << endl << endl; spacing(); yellow();
        cout << "Would you like to leave a review for us?(1. = Yes | 2. = No)"; red();
        cin >> answer;
        if (answer == 1) {
            system("cls"); cout << endl << endl; spacing();
            cout << "From a rating of 5 with 1 being negative and 5 being positive, what would you rate Auckland Insurance?" << endl; spacing(); yellow();
            cin >> answer; spacing();
            cout << "Write a description in detail of your thoughts with Auckland Insurance" << endl; 
            cin.ignore(); spacing(); red(); getline(cin, detailedReview);
            system("cls");
            cout << endl << endl; spacing();
            cout << "Thank you for your review. We will analyse it to see how we can improve" << endl;
        }
        else {

        }



        options("customer");
    }
