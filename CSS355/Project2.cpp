#include <iostream>
#include <iomanip>
using namespace std;
class intNode;
typedef intNode* intNodePtr;


//created new type called intNodePtr

class intNode
{
      private:
         int data;
         intNodePtr link;
      public:
         intNode (int inData, intNodePtr inlink)
                {
                  data=inData;
                  link=inlink;
                }
         int getData() const {return data;}
         void setData(int inData){data=inData;}
         intNodePtr getLink() const{return link;}
         void setLink(intNodePtr inlink){link=inlink;}
};
template<class T>
class Stack{
    private:
        intNodePtr top;
    public:
      Stack();
      bool Push(int inData);
      bool Pop();
      void initializeStack();
      bool IsEmpty()const;
      bool IsFull()const;
      void Print();
      bool Search(int value);
      void PrintList() const;
      int showTop() const;
};
template<class T>
Stack<T>::Stack(){
      top = NULL;
}
template<class T>
void Stack<T>::initializeStack()
{
    intNodePtr tempLink = top, ptr=NULL;
     while (tempLink != NULL)
        {
           ptr = tempLink;
           tempLink = tempLink ->getLink();
           delete ptr;
        }
     top = NULL;


}
template<class T>
bool Stack<T>::Push(int inData){
   intNodePtr temp = new intNode(inData, top);
   top=temp;
}
template<class T>
int Stack<T>:: showTop() const
{
    int value=0;
    if (top == NULL)
       cout<<"Cannot show value of top - stack is empty" << endl;
    else
       value = top ->getData();

 return value;

}
template<class T>
bool Stack<T>::Pop(){
     int value=0;
 if (top == NULL)
    cout<<"Cannot pop from empty stack";
 else
   {
    value = top ->getData();
    intNodePtr tempLink = top;
    top = top->getLink();
    delete tempLink;

   }
 return value;

}
template<class T>
bool Stack<T>::IsEmpty()const{

     if (top == NULL)
        return true;
     else
        return false;
}
template<class T>
bool Stack<T>::IsFull()const{
        return false;

}
template<class T>

void Stack<T>::Print()
{
    intNodePtr temp=top;
    // check for stack underflow
    if (top == NULL) {
        cout << "\nStack Underflow";
        exit(1);
    }
    else {

        while (temp != NULL) {

            // print node data
            cout <<  temp->getData() <<"<-";


            // assign temp link to temp
            temp = temp->getLink();
        }
    }
}
template<class T>
bool Stack<T>::Search(int Value)
{
    intNodePtr temp=top;
    while(temp!=NULL)
        {
            if(temp->getData()==Value)
                return true;
            temp=temp->getLink();
        }
    return false;




}


int main(){
    Stack <int> s;
    string x;
    s.Push(20);
    s.Push(13);
    s.Push(12);

    //s.Print();
    s.Search(12);
    int item=0;
    cout<<"Menu"<<endl;
    cout<<"+ to add to the stack"<<endl;
    cout<<"- to pop out an item from the stack"<<endl;
    cout<<"? to search Item in the stack"<<endl;
    cout<<"P to print the stack"<<endl;
    cout<<"@ to print item which is on top of stack"<<endl;
    cout<<"1- Test the Copy constructor"<<endl;
    cout<<"2- Test assignment operator"<<endl;
    cout<<"3- Test Destructor"<<endl;

    cin>>x;
    if(x=="+")
        {
            cout<<"Enter value to push:";
            cin>>item;
            s.Push(item);
            s.Print();
            
        }


    else if(x=="-")
        {
            //cout<<"Enter value to pop:";
            //cin>>item;
            s.Pop();
            s.Print();

        }

    else if(x=="?")
        {
            cout<<"Enter value to search:";
            cin>>item;
            s.Search(item);


        }

    else if(x=="P")
        {
            s.Print();

        }


    else if(x=="@")
        {

            cout<<"Top:"<<s.showTop() <<endl;

        }

    /*

    else if(x=="1")

    else if(x=="2")

    else if(x=="3")
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
    }*/
    return 0;
}

