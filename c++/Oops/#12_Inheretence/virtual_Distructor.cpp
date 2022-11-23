#include <iostream>
using namespace std;

class Base
{
public:
  Base(int a,int b)
  {
    cout<<"Base class constructor"<< endl;
  }

  // If we don't add the virtual in front of the distructor
  // then the cpp only going to call Base class distructor
  // Adding virtual telling cpp that there can a disconstructor in dervied class
  virtual~Base()
  {
    cout << "Base class distructor" << endl;
  }
};

class Dervied : public Base
{
public:
  Dervied(string p ,string q,int a ,int b):Base(a,b)
  {
    cout << "Dervied class constructor" << endl;
  }
  ~Dervied()
  {
    cout << "Dervied class distructor" << endl;
  }
};

int main()
{
  Base *A = new Dervied("adf","asdf",1,2);
  delete A;

}