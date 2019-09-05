#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 10;
class Stack{
      int top;
      int data[MAX];
public:
      Stack();
      bool Push(int e);
      bool Pop(int& e);
      bool IsEmpty()const;
      bool IsFull()const;
      void Print()const;
};

Stack::Stack(){
      top = -1;
}

bool Stack::Push(int e){
     bool success = false;
     if (!IsFull()){
        success = true;
        data[++top] = e;
     }
     return success;
}
bool Stack::Pop(int& e){
     bool success = false;
     if (!IsEmpty()){
        success = true;
        e = data[top--];
     }
     return success;

}
bool Stack::IsEmpty()const{
     return top == -1;
}
bool Stack::IsFull()const{
     return top == MAX-1;
}
void Stack::Print()const{
     for (int i = top; i>=0; i--)
         cout << setw(5) << data[i] << endl;
     cout <<"********" <<endl;
}


