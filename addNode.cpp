#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void AddStudent(Student **head)
{
    Student **start = head;
    static int choice ;
    static string targetName;

    cout<< "At which position would you like to add the student : \n";
    cout<<"1.Add student at the beginning \n";
    cout<<"2.Add student at the end\n";
    cout<<"3.Add student after a specific positon\n";
    cout<<"4.Add student before a specific positon\n";
    cout<<"5.**Exit** \n";

   cout<<"Enter operatin to be performed by index :";
   cin >> choice;

   switch (choice){
    case 1:
    {
        addNodeAtBeginning(start);
        break;
    }
    case 2:
    {
        addNodeToEnd(start);
        break;
    }
    case 3:
    {
        cout<<"Enter name of student after which you wanna add anoter:";
        cin>> targetName;
        addNodeAfter(start,targetName);
        break;
    }
    case 4:
    {
      cout<<"Enter name of student before which you wanna add anoter:";
      cin>> targetName;
      addNodeBefore(start,targetName);
      break;
    }
    case 5:
    {
        return ;
    }
    default:
    {
        cout<<"invalid choice\n";
        return ;
    }
   }

}

void addNodeAtBeginning(Student **head)
 {
    // Create a new node
    Student *newStudent = new Student();

    // Fill in the data for the new node
    fillNodeData(newStudent);
    
    // Set the next pointer of the new node to the current head
    newStudent->next = *head;

    // Update the head pointer to point to the new node
    *head = newStudent;
    cout<<"Student successfully added\n";
    cout<<"\n--------------------------------\n";
}


void addNodeToEnd(Student** headRef)
 {
    // Create a new node
    Student* newStudent = new Student;

    // Fill in the data for the new node
    fillNodeData(newStudent);

    newStudent->next = NULL;

    // If the linked list is empty, make the new node the head
    if (*headRef == NULL) {
        *headRef = newStudent;
        return;
    }

    // Traverse to the end of the linked list
    Student* current = *headRef;
    while (current->next != NULL) {
        current = current->next;
    }

    // Add the new node at the end of the linked list
    current->next = newStudent;
    cout<<"Student successfully added\n";
    cout<<"\n--------------------------------\n";
}


void addNodeBefore(Student** headRef, const string& targetName)
 {

     if (*headRef == NULL) {
        cout << "Error: Linked list is empty." << endl;
        return;
    }

    // Create a new node
    Student* newStudent = new Student;
    fillNodeData(newStudent);
    newStudent->next = NULL;

    // If the target node is the head, make the new node the new head
    if ((*headRef)->firstName == targetName) {
        newStudent->next = *headRef;
        *headRef = newStudent;
        return;
    }

    // Find the node before the target node
    Student* current = *headRef;

    while (current->next != NULL && current->next->firstName != targetName) {
        current = current->next;
    }

    // If the target node is found, insert the new node before it
    if (current->next != NULL) {
        newStudent->next = current->next;
        current->next = newStudent;
        cout<<"Student successfully added\n";
    } 
    else {
        cout << "Target node not found in the linked list." << endl;
        delete newStudent;
    }
    cout<<"\n--------------------------------\n";
}

void addNodeAfter(Student** headRef, const string& targetName) 
{
    // Check if the linked list is empty
    if (*headRef == NULL) {
        cout << "Error: Linked list is empty." << endl;
        return;
    }

    // Traverse the linked list to find the target node
    Student* current = *headRef;

    while (current != NULL && current->firstName != targetName) {
        current = current->next;
    }

    // Check if the target node was found
    if (current == NULL) {
        cout << "Error: Target node not found." << endl;
        return;
    }

    // Create a new node
    Student* newstudent = new Student;

    // Initialize the data for the new node
    cout << "Enter the details for the new student:\n";
    fillNodeData(newstudent);

    // Insert the new node after the target node
    newstudent->next = current->next;
    current->next = newstudent;
    cout<<"Student successfully added\n";
    cout<<"\n--------------------------------\n";
}

