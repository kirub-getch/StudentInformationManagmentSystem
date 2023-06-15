#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void search(Student *head)
{
    Student *start = head;
    static int choice ;
    static string targetName;

    cout<< "How would you like to search: \n";
    cout<<"1.search by name\n";
    cout<<"2.search by id\n";
    cout<<"3.search by email\n";
    cout<<"4.search by phone number\n";
    cout<<"5.**Exit** \n";

   cout<<"Enter operatin to be performed by index :";
   cin >> choice;

   switch (choice){
    case 1:
    {
        cout<<"Enter Name to be searched:";
        cin>> targetName;
        searchByName(start,targetName);
        break;
    }
    case 2:
    {
        cout<<"Enter ID to be searched:";
        cin>> targetName;
        searchByID(start , targetName);
        break;
    }
    case 3:
    {
        cout<<"Enter Emailaddress to be searched:";
        cin>> targetName;
        searchByEmail(start,targetName);
        break;
    }
    case 4:
    {
      cout<<"Enter Phone number to be searched:";
      cin>> targetName;
      searchByPhone(start,targetName);
      break;
    }
    case 5:
    {
      return ;
    }
   }

}

void searchByName(Student* head, const string& targetName)
 {
    Student* current = head;

    while (current != nullptr) {
        if (current->firstName == targetName) 
        {
            cout<< targetName << " has been found ..."<< endl;
            singleDisplay(current);
            return ; 
        }
        current = current->next;
    }
}

void searchByID(Student* head, const string& targetID)
 {
    Student* current = head;

    while (current != nullptr) {
        if (current->id == targetID) 
        {
            cout<< targetID << " has been found ..."<< endl;
            singleDisplay(current);
            return ; 
        }
        current = current->next;
    }
}

void searchByEmail(Student* head, const string& targetEmail)
 {
    Student* current = head;

    while (current != nullptr) {
        if (current->emailAddress == targetEmail) 
        {
            cout<< targetEmail << " has been found ..."<< endl;
            singleDisplay(current);
            return ; 
        }
        current = current->next;
    }
}

void searchByPhone(Student* head, const string& targetPhone)
 {
    Student* current = head;

    while (current != nullptr) {
        if (current->phoneNumber == targetPhone) 
        {
            cout<< targetPhone << " has been found ..."<< endl;
            singleDisplay(current);
            return ; 
        }
        current = current->next;
    }
}
