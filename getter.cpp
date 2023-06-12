#include <iostream>
#include <string>
#include <cctype>
#include "student.h"

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
 