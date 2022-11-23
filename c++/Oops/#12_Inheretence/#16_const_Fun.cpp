#include <iostream>
using namespace std;

class A
{
  const int z = 10;
  // z = 11; // This is wrong because z is constant we cant change the value of z

  int x;
public:
  A(int x){
    this->x = x;
  }

  //const will restrect us to change data members inside class
   void getX()const{
    cout<<"The value of x = "<<x<<endl;
    // x = 0;
    // cout<<"The value of x = "<<x<<endl;
  }



  void setx(int x){
    this->x = x;
    cout<<"The value of x = "<<x<<endl;
    
  }
};

int main()
{
  A a(99);
  a.getX();
  a.setx(101);

}