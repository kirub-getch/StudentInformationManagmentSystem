#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    Student*head = NULL;
    static int choice;
    static string targetName;

    Student*s1 = new Student{"kirub","getch","wondwosen","1303195","2013","kirub@gmail.com","0930630075","comp_eng",3.6,NULL};
     Student*s2 = new Student{"sofi","getch","wondwosen","1303195","2013","kirub@gmail.com","0930630075","comp_eng",3.6,NULL};
     Student*s3 = new Student{"raki","getch","wondwosen","1303195","2013","kirub@gmail.com","0930630075","comp_eng",3.6,NULL};
     Student*s4 = new Student{"nigist","getch","wondwosen","1303195","2013","kirub@gmail.com","0930630075","comp_eng",3.6,NULL};
     Student*s5 = new Student{"kal","getch","wondwosen","1303195","2013","kirub@gmail.com","0930630075","comp_eng",3.6,NULL};
    head = s1; 
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
   
    cout<<"welcome to our online Studentmanagment system\n";
    
    while(true)
    {

     cout<<"\nOperations you can perform:\n";
     cout<<"1.Add a new student \n";
     cout<<"2.Delete a student \n";
     cout<<"3.Update a student \n";
     cout<<"4.Search for a student\n";
     cout<<"5.Sort the student list\n";
     cout<<"6.Print the student list\n";
     cout<<"7.**Exit** \n";

    cout<<"\nplease choose operation to perform by selecting the number in front:";
    cin>> choice;

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
            //sort();
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

    }

    }
    return 0;
}