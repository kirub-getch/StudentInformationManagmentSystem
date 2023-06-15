#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void deleteStudent(Student **head)
{
    Student **start = head;
    static int choice ;
    static string targetName;

    cout<< "At which position would you like to delete the student : \n";
    cout<<"1.Delete first student \n";
    cout<<"2.Delete last student\n";
    cout<<"3.Delete a specific student\n";
    cout<<"4.Delete all student\n";
    cout<<"5.**Exit** \n";

   cout<<"Enter operatin to be performed by index :";
   cin >> choice;

   switch (choice){
    case 1:
    {
        deleteFirstStudent(start);
        break;
    }
    case 2:
    {
        deleteLastStudent(start);
        break;
    }
    case 3:
    {
        cout<<"Enter name of student you wanna delete:";
        cin>> targetName;
        deleteStudent(start,targetName);
        break;
    }
    case 4:
    {
      
      deleteAll(start);
      break;
    }
    case 5:
    {
        return ;
    }
   }

}

void deleteFirstStudent(Student** headRef) {
    // Check if the linked list is empty
    if (*headRef == NULL) {
        cout << "Error: Linked list is empty." << endl;
        return;
    }

    // Store the current head Student
    Student* current = *headRef;

    // Update the head pointer to the next Student
    *headRef = (*headRef)->next;

    // Delete the first Student
    delete current;

    cout << "First Student deleted successfully." << endl;
}

void deleteLastStudent(Student** headRef) {
    // Check if the linked list is empty
    if (*headRef == NULL) {
        cout << "Error: Linked list is empty." << endl;
        return;
    }

    // Check if the linked list has only one Student
    if ((*headRef)->next == NULL) {
        delete *headRef;
        *headRef = NULL;
        cout << "Last Student deleted successfully." << endl;
        return;
    }

    // Traverse the linked list to find the last Student and the second-to-last Student
    Student* current = *headRef;
    Student* previous = NULL;
    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    // Update the second-to-last Student to become the new last Student
    previous->next = NULL;

    // Delete the last Student
    delete current;

    cout << "Last Student deleted successfully." << endl;
}

void deleteStudent(Student** headRef, const string& targetName) {
    // Check if the linked list is empty
    if (*headRef == NULL) {
        cout << "Error: Linked list is empty." << endl;
        return;
    }

    // Check if the target Student is the head Student
    if ((*headRef)->firstName == targetName) {
        Student* temp = *headRef;
        *headRef = (*headRef)->next;
        delete temp;
        cout << "Student deleted successfully." << endl;
        return;
    }

    // Traverse the linked list to find the target Student and its previous Student
    Student* current = *headRef;
    Student* previous = NULL;
    while (current != NULL && current->firstName != targetName) {
        previous = current;
        current = current->next;
    }

    // Check if the target Student was found
    if (current == NULL) {
        cout << "Error: Target Student not found." << endl;
        return;
    }

    // Update the previous Student to skip the target Student
    previous->next = current->next;

    // Delete the target Student
    delete current;

    cout << "Student "<<targetName<<" deleted successfully." << endl;
}
void deleteAll(Student **head)
{

    Student *temp , *temp2;

    if (*head == NULL)
       cout<<"List is empty";

    else
    {
        temp = *head;
        temp2 = NULL;
        while(temp->next!= NULL)
        {
            temp2 = temp;
            temp = temp->next;
            delete temp2;
        }
        delete temp;
        *head = NULL;
    }
}