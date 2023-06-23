#include <iostream>
#include <string>
#include "student.h"
#include <cctype>

using namespace std;

void fillNodeData(Student* newNode)
 {
    cin.ignore();
    cout << "First Name: ";
    getline(cin, newNode->firstName);
//capitalizes the first letter incase the user enterd a starte there name with a small letter
    if (!newNode->firstName.empty()) {
        newNode->firstName[0] = toupper(newNode->firstName[0]);
    }
//gets the last name from the user
    cout << "Middle Name: ";
    getline(cin, newNode->middleName);
//capitalizes the first letter incase the user enterd a starte there name with a small letter
    if (!newNode->middleName.empty()) {
        newNode->middleName[0] = toupper(newNode->middleName[0]);
    }
//gets last name from the user
    cout << "Last Name: ";
    getline(cin, newNode->lastName);
//capitalizes the first letter incase the user enterd a starte there name with a small letter
     if (!newNode->lastName.empty()) {
        newNode->lastName[0] = toupper(newNode->lastName[0]);
    }
//get gender of student 
cout<<"Gender(Enter M if Male and F if female";
char sex;
cin>>char;
switch(sex)
{
    case 'm':case 'M':
    newNode->gender= MALE;
    break;
    case 'f': case'F':
    newNode->gender=FEMALE;
    break;
}

//get id
    cout << "ID: ";
    cin >> newNode->id;
    if(newNode->id.length() != 7)
    {
     cout<<"please enter a proper ID number\n";
     cin>>newNode->id;
    }
    cin.ignore();
//gets bacth from the user
    cout << "Batch: ";
    getline(cin, newNode->batch);

    newNode->emailAddress = getEmailAddress();
    newNode->phoneNumber = getPhoneNumber();

    cout << " Department: ";

    newNode->department = getDepartment();
    cin.ignore();

    cout << "CGPA: ";
    cin >> newNode->CGPA;
    cin.ignore();
}
