/*

       CSS 355:Data Structures and Algorithms
       Fall Semester, 2019

       Assignment 2: This program is implementing push and pop methods
                     of stack using an array

       Programmed by: Surya Partap Singh
       Due: Thursday,September 5,2019

*/
#include <iostream>
#include "Stack.h"
using namespace std;
int main(){
    Stack s;
    string x;
    cin >> x;
    int cnt = 0;
    for(int i=0; x[i]; i++)
 	        cnt++;
    while (cnt){
          cout<< s.Push(x)<<endl;;
          s.Print();                
          cin >> x;
    }
    cin >> x;
    while (cnt){
          string p;
          cout << s.Pop(p) << endl;      
          s.Print();
          cin >> x;
    }
    return 0;    
}
