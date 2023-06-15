#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void displayLinkedList(Student* head)
 {
    // Check if the linked list is empty
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
        return;
    }

     // Traverse the linked list and display the data of each node
     Student* current = head;
     while (current != NULL)
      {
        string fullName = current->firstName + " " + current->middleName " " +  "" current->lastName;
        cout << "Full Name: " << fullName<< endl;
        
        cout << "ID: " << current->id << endl;
        cout << noskipws << "\tBatch: " << current->batch <<;
        cout << "Email Address: " << current->emailAddress << endl;
        cout << "Department: " << current->department << endl;
        cout << noskipws <<"\tGrade: " << current->grade << endl;
        cout << endl;

        current = current->next;
    }
}