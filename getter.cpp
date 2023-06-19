#include <iostream>
#include <string>
#include <cctype>
#include "student.h"
#include <limits>

using namespace std;

 string getPhoneNumber()
    {
     
     string pnum;

     cout<<"phone number :";
    getline(cin , pnum);

     for(int i = 0; pnum[i];i++)
     {
      if(isdigit(pnum[i]) && (pnum.length() == 10))
         continue;
      else
      {
        cout<<"The phone number you intered is not correct "<<"Please enter again ...\n";
        return getPhoneNumber();
      } 
    }
    return pnum;
    }

string getEmailAddress()
{
      string email;
      string target = "@gmail.com";
      string target2 =" ";
      

      cout<<"Email adress :";
      getline(cin ,email);
       
       //checks if the string contais @gmail.com and assign bool true or false
       bool found = email.find(target) != string::npos;
      //checks if the string contais space character and assign bool true or false
       bool space = !(email.find(target2) != string::npos);
      //checks if the strings length is less than and assign bool true or false
       bool len = email.length() < 30;
      //checks if @gmail.com is the end of our string
       bool ending = email[email.find(target) + 10] == '\0';
       

      if(!found || !space || !len || !ending)
          {
           cout<<"you have enterd an invalid email ,please enter a proper format :\n";
           return getEmailAddress();
          }
      

      return email;
}
 
string getDepartment()
{
    static int choice;
    cout << "\nDepartment list:\n";
    cout << "--------------------------------\n";
    cout << "1. Computer Engineering\n"
         << "2. Electrical Engineering\n"
         << "3. Mechanical Engineering\n"
         << "4. Electro Mechanical Engineering\n"
         << "5. Chemical Engineering\n"
         << "6. Civil Engineering\n"
         << "7. Software Engineering\n"
         << "8. Computer Science\n"
         << "9. Industrial Engineering\n"
         << "10. Aerospace and Aeronautical Engineering\n"
         << "11. Environmental Engineering\n"
         << "12. Materials Engineering\n"
         << "13. Other\n"
         << "--------------------------------\n"
         << "Please select your department by index: ";

    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the remaining newline character

    switch (choice)
    {
    case 1:
        return "Computer Engineering";
    case 2:
        return "Electrical Engineering";
    case 3:
        return "Mechanical Engineering";
    case 4:
        return "Electro Mechanical Engineering";
    case 5:
        return "Chemical Engineering";
    case 6:
        return "Civil Engineering";
    case 7:
        return "Software Engineering";
    case 8:
        return "Computer Science";
    case 9:
        return "Industrial Engineering";
    case 10:
        return "Aerospace and Aeronautical Engineering";
    case 11:
        return "Environmental Engineering";
    case 12:
        return "Materials Engineering";
    case 13:
        return "Other";
    default:
        return "Invalid choice";
    }
}
