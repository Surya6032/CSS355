#include <iostream>

using namespace std;

template <class T>      //scope of T ends with function declaration;
void PrintArray(T ar[],int size);
template <class T>
void FillArray(T ar[],int& size);

int main()
{
 int ar[]= {10,20,30,40};
 PrintArray(ar,4);
 cout<<endl;
 string ar2[] = {"this","is","fun"};
 PrintArray(ar2,3);
 cout<<endl;
 
 
 
 int size=0;
 FillArray(ar2,size);
 PrintArray(ar2,size);


 return 0;


}

template <class T>
void PrintArray(T ar[],int size)
{
     for(int i=0;i<size;i++)
             cout<< ar[i]<<"\t";
                    //scope of T ends here
}
template <class T>
void FillArray(T ar[],int& size)
{
cout<<"Enter Size:"<<endl;
cin>>size;
cout<<"Enter Values:"<<endl;

for(int i=0;i<size;i++)
         cin>>ar[i];

}
         




