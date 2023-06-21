#include <iostream>
#include <string>
#include "student.h"
#include <cctype>

#define false 0
#define true 1

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

         if (!targetName.empty())
         targetName[0] = toupper(targetName[0]);

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
    default:
    {
        cout<<"invalid choice";
        return ;
    }
   }

}

void searchByName(Student* head, const string& targetName)
 {
    Student* current = head;
    bool found = false;


    while (current != nullptr) {
        if (current->firstName == targetName) 
        {
            cout<< targetName << " \nhas been found ..."<< endl;
            singleDisplay(current);
            found = true;
            
        }
        else if(current->next  == NULL && !found)
        {
           cout<<"\n**student not found !**\n";
        }
        current = current->next;
    }
   
    cout<<"\n--------------------------------\n";
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
     if(current == NULL)
        {
            cout<<"**student not found !**\n";
        }
    cout<<"\n--------------------------------\n";
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
    if(current == NULL)
        {
            cout<<"**student not found !**\n";
        }
    cout<<"\n--------------------------------\n";
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
    if(current == NULL)
        {
            cout<<"**student not found !**\n";
        }
    cout<<"\n--------------------------------\n";
}
