#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    student *head = NULL;

    addNodeAtBeginning(&head);
    displayInfo(head);
}