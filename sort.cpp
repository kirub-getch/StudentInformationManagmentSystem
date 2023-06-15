#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void sort(Student** head)
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

    *head = sortedList;  // Update the head pointer to point to the sorted list
}
