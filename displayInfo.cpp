#include <iostream>
#include <string>
#include "student.h"

using namespace std; 

void displayInfo(Student *head)
 {

    cout <<"\n***# Student list #***\n"
         <<"--------------------------------";

    // Check if the linked list is empty
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
        return;
    }

     // Traverse the linked list and display the data of each node
     Student* current = head;
     while (current != NULL)
      {
        string fullName = current->firstName + " " + current->middleName + " " +  "" + current->lastName;
        cout << "\nFull Name: " << fullName<< endl;
        
        cout << "ID: " << current->id << endl;
        cout << "Batch: " << current->batch << endl;
        cout << "Email Address: " << current->emailAddress << endl;
        cout << "phone Number: " << current->phoneNumber << endl;
        cout << "Department: " << current->department << endl;
        cout << "Grade: " << current->grade << endl;
        cout << endl;

        current = current->next;
    }
    cout<<"\n--------------------------------\n";
}

void singleDisplay(Student *head)
{

    Student* current = head;
    
    string fullName = current->firstName + " " + current->middleName + " " +  "" + current->lastName;
        cout << "\nFull Name: " << fullName<< endl;
        
        cout << "ID: " << current->id << endl;
        cout << "Batch: " << current->batch << endl;
        cout << "Email Address: " << current->emailAddress << endl;
        cout << "phone Number: " << current->phoneNumber << endl;
        cout << "Department: " << current->department << endl;
        cout << "Grade: " << current->grade << endl;
        cout << endl;
        cout<<"\n--------------------------------\n";
}