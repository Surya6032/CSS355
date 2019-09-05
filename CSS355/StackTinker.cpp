#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 10;
template<class T>
class Stack{
      int top;
      T data[MAX];
public:
      Stack();
      bool Push(int e);
      bool Pop(int& e);
      bool IsEmpty()const;
      bool IsFull()const;
      void Print()const;      
};
template<class T>
Stack<T>::Stack(){
      top = -1;
}
template<class T>
bool Stack<T>::Push(int e){
     bool success = false;
     if (!IsFull()){
        success = true;
        data[++top] = e;               
     }     
     return success;
}
template<class T>
bool Stack<T>::Pop(int& e){
     bool success = false;
     if (!IsEmpty()){
        success = true;
        e = data[top--];               
     }     
     return success;
     
}
template<class T>
bool Stack<T>::IsEmpty()const{
     return top == -1;     
}
template<class T>
bool Stack<T>::IsFull()const{
     return top == MAX-1;     
}
template<class T>
void Stack<T>::Print()const{
     for (int i = top; i>=0; i--)
         cout << setw(5) << data[i] << endl;     
     cout <<"********" <<endl;
}


int main(){
    Stack <int> s;
    int x;
    cin >> x;
    while (x){
          cout<< s.Push(x)<<endl;;
          s.Print();                
          cin >> x;
    }
    cin >> x;
    while (x){
          int p;
          cout << s.Pop(p) << endl;      
          s.Print();
          cin >> x;
    }
    return 0;    
}
