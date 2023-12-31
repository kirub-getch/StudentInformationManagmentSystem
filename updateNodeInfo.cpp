#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void updateStudentInfo(Student **head , const string targetName)
{
    static string answer;
    int choice,respond;


    respond = 1; 

     // Traverse the linked list to find the target node
    Student* current = *head;

    while (current != NULL && current->firstName != targetName) {
        current = current->next;
    }

    // Check if the target node not was found
    if (current == NULL) {
        cout << "Error: Target node not found." << endl;
        return;
    }
     // if the target is found 
    // Display the menu for selecting the data to update
    cout << "Select the data to update:" << endl;
    cout << "1. First Name" << endl;
    cout << "2. Middle Name" << endl;
    cout << "3. Last Name" << endl;
    cout << "4. ID" << endl;
    cout << "5. Batch" << endl;
    cout << "6. Email Address" << endl;
    cout << "7. Department" << endl;
    cout << "8. Grade" << endl;
    cout << "9. Gender" << endl;
    cout<<"10.**Exit** \n";

    do {

    cout << "\nEnter your choice: ";
    cin >> choice;
    cin.ignore();
    if(choice == 9)
    {
        fillNodeData(current);
    }

    // Update the selected data based on the user's choice
    switch (choice) {
        case 1:
         {
            cout << "Enter the new First Name: ";
            getline(cin, current->firstName);
            break;
        }
        case 2: 
        {
            cout << "Enter the new Middle Name: ";
            getline(cin, current->middleName);
            break;
        }
        case 3: 
        {
            cout << "Enter the new Last Name: ";
            getline(cin, current->lastName);
            break;
        }
        case 4: 
        {
            cout << "Enter the new ID: ";
            cin >> current->id;
            cin.ignore();
            break;
        }
        case 5: 
        {
            cout << "Enter the new Batch: ";
            getline(cin, current->batch);
            break;
        }
        case 6: {
            cout << "Enter the new Email Address: ";
            getline(cin, current->emailAddress);
            break;
        }
        case 7: {
            cout << "Enter the new Department: ";
            getline(cin, current->department);
            break;
        }
        case 8: {
            cout << "Enter the new CGPA: ";
            cin >> current->CGPA;
            cin.ignore();
            break;
        }
        case 9:
        {
            cout<<"Gender(Enter M if Male and F if female) :";
            char sex;
            cin>>sex;
            switch(sex)
            {
            case 'm':case 'M':
            {current->gender= MALE;
            break;}
            case 'f': case'F':
            {current->gender=FEMALE;
            break;}
           }
        }
        case 10:
        {
        return ;
        }

        default:
            cout << "Invalid choice." << endl;
            return;
    }

    cout << "student information updated successfully." << endl;
    cout <<"\nwould you like to update another information? (y/n) :" ; 

    cin>>answer;

    if(answer == "n" || answer == "N")
       respond = 0;

    }while(respond);
}