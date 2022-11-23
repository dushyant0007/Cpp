#include <iostream>
using namespace std;

class BaseClass{
public:
  int var_base = 190;
  // we add virtual if we want to call derived class display function insted of base class
  // when base class pointer pointing to dervied class address
  virtual void display(){
    cout << "Dispalying Base class variable var_base  = " << var_base << endl;
  }
  void diff(){
    cout << "This is diff" << endl;
  }
};

class DerivedClass : public BaseClass{
public:
  int var_derived = 390;
  void display(){
    cout << "Dispalying Base class variable var_base = " << var_base << endl;
    cout << "Dispalying Derived class variable var_derived  = " << var_derived << endl;
  }
};

int main(){
  BaseClass *base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;

  base_class_pointer = &obj_derived;
  //base class pointer pointing to derived class
  //can only give excess to inherited data form base class

  base_class_pointer->var_base = 34;
  // base_class_pointer->var_derived= 134; // Will throw an error
  base_class_pointer->display();

  base_class_pointer->var_base = 3400;
  base_class_pointer->display();
  base_class_pointer->diff();


  cout << "--------------------------------------" << endl;

  BaseClass *abc = new DerivedClass();
  abc->diff();
  abc->display();
  abc->var_base;
  // abc->var_derived;// NOT excessable because we have BaseClass Pointer

  cout << "--------------------------------------" << endl;

  DerivedClass *derived_class_pointer;
  derived_class_pointer = &obj_derived;
  derived_class_pointer->var_base = 9448;
  derived_class_pointer->var_derived = 98;
  derived_class_pointer->display();
  derived_class_pointer->diff();

  
  return 0;
}