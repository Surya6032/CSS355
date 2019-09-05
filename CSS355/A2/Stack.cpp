#include <iostream>
#include "Stack.h"
using namespace std;

//This is a constructor used to declare values
Stack::Stack(){
      top=0 ;
}

//This method is used to push string values in the stack
bool Stack::Push(string e){
     bool success = false;
     if (!IsFull()){
        success = true;
        data[++top] = e;               
     }     
     return success;
}

//This method is used for popping out values from stack
bool Stack::Pop(string& e){
     bool success = false;
     if (!IsEmpty()){
        success = true;
        e = data[top--];               
     }     
     return success;
     
}

//checks if the stack is empty or not
bool Stack::IsEmpty()const{
     return top == -1;     
}

//checks if the stack is full or not
bool Stack::IsFull()const{
     return top == MAX-1;     
}

//Print the values of stack
void Stack::Print()const{
     for (int i = top; i>=0; i--)
         cout << setw(5) << data[i] << endl;     
     cout <<"********" <<endl;
}

