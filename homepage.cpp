#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    Student*head = NULL;
    static int choice;
    static string targetName;

    Student*s1 = new Student{"Kirubel","Wondwosen","Getachew","1309135","2010","kirub@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL};
     Student*s2 = new Student{"Tsigemariyam","Mola","Bayew","1303192","2012","Tsigemariyam@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL};
     Student*s3 = new Student{"Biniyam","Germa","Tefera","1303193","2011","Biniyam@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL};
     Student*s4 = new Student{"Haileyesus","Sleshi","Berihun","1303194","2016","Haileyesus@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL};
     Student*s5 = new Student{"Abel","Sisay","Tigabu","1303195","2014","Abel@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL};
     Student*s6 = new Student{"Mintesnot","Desta","Abuye","1403456","2015","Mintesnot@gmail.com","0930630075","Computer Engineering",3.6,MALE,NULL}; 
     
    head = s1; 
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s6;
   
   
    
    while(true)
    {
    cout<<"##welcome to our online Studentmanagment system##\n";
    studentCount(head);
    
     cout<<"\nOperations you can perform:\n";
     cout<<"1.Add a new student \n";
     cout<<"2.Delete a student from list \n";
     cout<<"3.Update a student's information\n";
     cout<<"4.Search for a student\n";
     cout<<"5.Sort the student list\n";
     cout<<"6.display the student list\n";
     cout<<"7.**Exit** \n";

    cout<<"\nplease choose operation to perform by selecting the number in front:";
    cin>> choice;
    
    cin.ignore();
    switch (choice)
    {
        case 1:
        {
            AddStudent(&head);
            break;
        }
        case 2:
        {
            deleteStudent(&head);
            break;
        }
        case 3:
        {   
            cout<<"Enter name of student to be updated:";
            cin>> targetName;
            updateStudentInfo(&head , targetName);
            break;
        }
        case 4:
        {
            search(head);
            break;
        }
        case 5:
        {
            sort(&head);
            break;
        }
        case 6:
        {
            displayInfo(head);
            break;
        }
        case 7:
        {
            deleteAll(&head);
            displayInfo(head);
            return 1;
        }
        default:
        {
            cout<<"invalid operation \n";
            return 1;
            
        }

    }

    }
    return 0;
}