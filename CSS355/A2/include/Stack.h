#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 10;
class Stack{
      string top;
      string data[MAX];
public:
      Stack();
      bool Push(int e);
      bool Pop(int& e);
      bool IsEmpty()const;
      bool IsFull()const;
      void Print()const;
};
