/*

       CSS 355:Data Structures and Algorithms
       Fall Semester, 2019

       Assignment 2: This program is implementing push and pop methods
                     of stack using an array

       Programmed by: Surya Partap Singh
       Due: Thursday,September 5,2019

*/
#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 10;
class Stack{
      int top;
      string data[MAX];                                        //Creates an array of strings
public:
      Stack();                                                 //Constructor
      bool Push(string e);
      bool Pop(string& e);
      bool IsEmpty()const;
      bool IsFull()const;
      void Print()const;      
};
