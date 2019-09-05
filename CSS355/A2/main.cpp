#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack s;
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
