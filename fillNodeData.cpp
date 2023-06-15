#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void fillNodeData(Student* newNode)
 {
    
    cout << "First Name: ";
    getline(cin, newNode->firstName);

    cout << "Middle Name: ";
    getline(cin, newNode->middleName);

    cout << "Last Name: ";
    getline(cin, newNode->lastName);

    cout << "ID: ";
    cin >> newNode->id;
    cin.ignore();

    cout << "Batch: ";
    getline(cin, newNode->batch);

    newNode->emailAddress = getEmailAddress();
    newNode->phoneNumber = getPhoneNumber();

    cout << "Department: ";
    getline(cin, newNode->department);

    cout << "Grade: ";
    cin >> newNode->grade;
    cin.ignore();
}
