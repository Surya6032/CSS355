#include <iostream>

using namespace std;

class Pair
{
   protected:
      int x;
      int y;
  public:
      Pair();
      Pair(int v1,int v2);
      void SetX(int v);
      void SetY(int v);
      int GetX() const;
      int GetY() const;
      int Set(int v1,int v2);
      void Print() const;
      





};
Pair::Pair():x(0),y(0)
    {
       cout<<" Pair Constructor no data"<<endl;               

    }
Pair::Pair(int v1,int v2):x(v1),y(v2)
   {
       cout<<"Pair Constructor Data"<<endl;


   } 
void Pair:: SetX(int v)
   { 
      x=v;


    }   
void Pair:: SetY(int v)
    {

      y=v;           

    }
int Pair:: GetX() const
    {

     return x;

    }
int Pair:: GetY() const
    {

     return y;


    }
int Pair:: Set(int v1,int v2)
    {

      x=v1;
      y=v2;



    }
void Pair:: Print() const
    {


     cout<<"("<<x<<","<<y<<")"<<endl;


    }
//**********************
// Triple declaration
//**********************
class Triple : public Pair
{

        int z;
    public:
        Triple();
        Triple(int v1,int v2,int v3);
        void setZ(int v);
        int GetZ() const;
        void Set(int v1,int v2,int v3);
        void Print() const;
        



};
Triple::Triple():Pair(),z(0)
{
 cout<<"Triple Constuctor -no data"<<endl;

}
Triple::Triple(int v1,int v2,int v3):Pair(v1,v2),z(v3)
{

 cout<<"Triple Consturctor data"<<endl;

}
void Triple::setZ(int v)
{

 z=v;

}
  
int Triple::GetZ() const
{
  return z;

}
void Triple::Set(int v1,int v2,int v3)
{

 Pair::Set(v1,v2);
 z=v3;


}
void Triple::Print() const
{

 Pair::Print();
 cout << "("<<x<<","<<y<<","<<z<<")";

}
int main()
{

    /*Pair p1;
    Pair p2;
    p1.Print();cout<<endl;
    p1.SetX(44);
    p1.Print();cout<<endl;
    cout<<"x: "<<p1.GetX()<<endl;
    cout<<"y:"<<p2.GetY()<<endl;
    p2.Print();cout<<endl;
    p2.Set(30,40);
    p2.Print();cout<<endl;*/
    Triple t1(4,5,6);
    t1.Print();
    return 0;

}








