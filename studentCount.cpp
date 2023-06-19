#include <iostream>
#include <string>
#include "student.h"

void studentCount(Student *head)
 {
    // Check if the linked list is empty
    if (head == NULL) {
        cout << "There are no registerd students ." << endl;
        return;
    }

     // Traverse the linked list and display the data of each node
     Student* current = head;
     int count = 0;
     while (current != NULL)
      {
        count++;
        
        current = current->next;
    }
    cout << "#Currently there are " << count << " students in the system.#";
    cout<<"\n--------------------------------\n";
}