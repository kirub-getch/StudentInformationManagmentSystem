#pragma once

#include <iostream>
#include <string>

using namespace std;


struct Student {
    string firstName;
    string middleName;
    string lastName;
    int id;
    string batch;
    string emailAddress;
    string phoneNumber;
    string department;
    double grade;
    Student* next;

    // Constructor
    Student(string first, string middle, string last, int studentId,
            string studentBatch, string email, string phone, string dept, double studentGrade)
        : firstName(move(first)), middleName(move(middle)), lastName(move(last)),
          id(studentId), batch(move(studentBatch)), emailAddress(move(email)), phoneNumber(move(phone)),
          department(move(dept)), grade(studentGrade), next(nullptr) {}
};

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
 void updateStudentInfo(student **head , const string name);

 //displays all the information in the linked list
 void displayLinkedList(Student* head);

 //deletes the first student from the list of students
void deleteFirstStudent(Student** headRef);

 //deltes the last student from the list of students
void deleteLastStudent(Student** headRef);

 //deltes any student by searching in the list of students
 void deleteStudent(Student** headRef, const string& targetName);

 //gets email address and phone number from user and checks if they are in correct format
 string getPhoneNumber();
 string getEmailAddress();



