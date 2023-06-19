#pragma once

#include <iostream>
#include <string>
#include "student.h"

using namespace std;


struct Student {
    string firstName;
    string middleName;
    string lastName;
    string id;
    string batch;
    string emailAddress;
    string phoneNumber;
    string department;
    double grade;
    Student  *next;

    
   
};
 //
 extern int choice;

void AddStudent(Student **head);
//adds a student to the beginning of the list of students
void addNodeAtBeginning(Student **head);

//adds student to the end of the list of students
void addNodeToEnd(Student** headRef);

//add student before a specific position
 void addNodeBefore(Student** headRef, const string& targetName);

 //adds student after a specific position
 void addNodeAfter(Student** headRef, const string& targetName);

 //fills in the student data
 void fillNodeData(Student* newNode);

 //Updates any information the user wants to change
 void updateStudentInfo(Student **head , const string name);

 //displays all the information in the linked list
 void displayInfo(Student *head);

 //display information of a single student
 void singleDisplay(Student *head);

 //displays how many students are currently in the system
 void studentCount(Student *head);

 //deletes the first student from the list of students
void deleteFirstStudent(Student** headRef);


//
void deleteStudent(Student **head);

//delets all the students from the list of students
void deleteAll(Student **head);

 //deltes the last student from the list of students
void deleteLastStudent(Student** headRef);

 //deltes any student by searching in the list of students
 void deleteStudent(Student** headRef, const string& targetName);

 //gets email address , depatment and  phone number from user and checks if they are in correct format
 string getPhoneNumber();
 string getEmailAddress();
 string getDepartment();


//searches for a specific student
void search(Student *head);
void searchByName(Student *head, const string& targetName);
void searchByID(Student *head, const string& targetID);
void searchByEmail(Student *head, const string& targetEmail);
void searchByPhone(Student *head, const string& targetPhone);


//sorts the list alphabeticaly
void sort(Student** head);
void sortById(Student** head);
void sortByName(Student** head);
void sortByBatch(Student** head);
