#include <iostream>
using namespace std;

class Test{
    int a;
    int b;
public:
  // Test(int i, int j) : a(i), b(j)
  // Test(int i, int j) : a(i), b(i+j)
  // Test(int i, int j) : a(3*i), b(j)
  // Test(int i, int j) : a(i+b), b(j) //This is wrong because the value of b is not avalabel yet
  // Test(int i, int j) : b(j), a(i+b)// Give red flag because we first decrear a, and we trying to set the value of b first
    Test(int i, int j) : a(i), b(a+j)
      {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
      }
};

class A{
  int a;
  public:
  A(int a){
    this->a = a;
    cout<<"The value of a is assigned"<<endl;
  } 
};

class B{
  int b;
  public:
  B(int b){
    this->b = b;
    cout<<"The value of b is assigned"<<endl;
  }
};

class C : public A, public B{
  int c;
  public:
  C(int a, int b, int c):A(a),B(b){
    this->c = c;
    cout<<"The value of c is assigned"<<endl;
  }
};

class D:public C{
  int d;
  public:
  D(int a, int b,int c,int d):C(a,b,c){
    this->d = d;
    cout<<"The value of d is assigned"<<endl;
  }
};


int main(){
  Test t(4, 6);
  cout<<"--------"<<endl;
  C one(1,2,3);
  cout<<"--------"<<endl;
  D two(1,3,5,6);
}