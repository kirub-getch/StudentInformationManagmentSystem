#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void sort(Student **head)
{
    static int choice ;
    

    cout<< "How would you like to sort: \n";
    cout<<"1.sort by name\n";
    cout<<"2.sort by id\n";
    cout<<"3.sort by batch\n";
    cout<<"4.**Return** \n";

   cout<<"Enter operatin to be performed by index :";
   cin >> choice;

   switch (choice){
    case 1:
    {
        sortByName(&(*head));
        break;
    }
    case 2:
    {
        sortById(&(*head));
        break;
    }
    case 3:
    {
        sortByBatch(&(*head));
        break;
    }
   
    case 4:
    {
      return ;
    }
    default:
    {
        cout<<"Invalid choice"<<endl;
        return ;
    }
   }
   cout<<"\n--------------------------------\n";

}


void sortById(Student** head)
 {
    if (*head == NULL || (*head)->next == NULL) {
        return;  // Empty list or list with only one element, no need to sort
    }

    Student* sortedList = NULL;
    Student* current = *head;

    while (current != NULL) {
        Student* nextNode = current->next;

        // Insert the current node into the sorted list
        if (sortedList == NULL || current->id < sortedList->id) {
            current->next = sortedList;
            sortedList = current;
        } else {
            Student* temp = sortedList;
            while (temp->next != NULL && current->id >= temp->next->id) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = nextNode;
    }
    cout<<"*****List sucessfuly sorted by ID\n";
    *head = sortedList;  // Update the head pointer to point to the sorted list
    
}
/*
void sortByName(Student** head)
 {
    if (*head == NULL || (*head)->next == NULL) {
        return;  // Empty list or list with only one element, no need to sort
    }

    Student* sortedList = NULL;
    Student* current = *head;

    while (current != NULL) {
        Student* nextNode = current->next;

        string currentName = current->firstName + current->middleName + current->lastName ;
        string sortedName = "";
        if (sortedList != NULL) {
               sortedName = sortedList->firstName + sortedList->middleName + sortedList->lastName;
        }
        // Insert the current node into the sorted list
        if (sortedList == NULL || currentName <  sortedName )
        {
            current->next = sortedList;
            sortedList = current;
        } 
        else {
            Student* temp = sortedList;
            string tempName = "";
            tempName = temp->firstName + temp->middleName + temp->lastName ;
            while (temp->next != NULL && currentName >= tempName) {
                temp = temp->next;
            }

            current->next = temp->next;
            temp->next = current;
        }

        current = nextNode;
    }
     cout<<"*****List sucessfuly sorted by /Name\n";
    *head = sortedList;  // Update the head pointer to point to the sorted list
}
*/
void sortByBatch(Student** head)
 {
    if (*head == NULL || (*head)->next == NULL) {
        return;  // Empty list or list with only one element, no need to sort
    }

    Student* sortedList = NULL;
    Student* current = *head;

    while (current != NULL) {
        Student* nextNode = current->next;

        // Insert the current node into the sorted list
        if (sortedList == NULL || current->batch < sortedList->batch) {
            current->next = sortedList;
            sortedList = current;
        } else {
            Student* temp = sortedList;
            while (temp->next != NULL && current->batch >= temp->next->batch) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = nextNode;
    }
     cout<<"*****List sucessfuly sorted by Batch\n";
    *head = sortedList;  // Update the head pointer to point to the sorted list
}



void sortByName(Student** head)
{
    if (*head == nullptr || (*head)->next == nullptr) {
        return;  // Empty list or list with only one element, no need to sort
    }

    Student* sortedList = nullptr;
    Student* current = *head;

    while (current != nullptr) {
        Student* nextNode = current->next;

        // Concatenate the names into a single string for comparison
        string currentFullName = current->firstName + current->middleName + current->lastName;

        // Insert the current node into the sorted list
        if (sortedList == nullptr || currentFullName < (sortedList->firstName + sortedList->middleName + sortedList->lastName)) {
            current->next = sortedList;
            sortedList = current;
        } else {
            Student* temp = sortedList;

            while (temp->next != nullptr && currentFullName >= (temp->next->firstName + temp->next->middleName + temp->next->lastName)) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = nextNode;
    }

    cout << "*****List successfully sorted by Name\n";
    *head = sortedList;  // Update the head pointer to point to the sorted list
}
