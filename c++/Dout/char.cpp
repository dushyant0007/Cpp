#include <iostream>
using namespace std;

//lvalue = an object that has a identifiable location in memory
//rvalue = no identifiable location in memory

int main(){

    //Array of characters
   char a[] = {'o','p','e','n'};
   cout<<a<<endl; // Output open // Keep printing until null char found
   cout<<*a<<endl; // Output o
   cout<<*(a+2)<<endl; // Output e

   cout<<"------------------"<<endl;

    // Array of char
   char b[] = {'q','u','e','e','n'};
   cout<<b<<endl;//Keep printing until null char found

   cout<<"------------------"<<endl;

   //String
   char c[] = {'a','b','c','d','f','\0'};
   cout<<c<<endl;

   cout<<"------------------"<<endl;

   char x = 'x';
   char* d = &x;
   cout<<d<<endl; // print till null char found

   char *e = b;
   char *f = c;
   cout<<b<<" - "<<c<<endl; 

    // "Tipue sultal" this is a string litters, which is const
   char* g = "Tipu Sultan"; // this convert to string
   cout<<g<<" "<<&*(g+1)<<" -+- "<<endl;
  

   //char* h = 'a'; // Why this is wrong // represented by integer (ascii value) and char* excepting pointer
   char* h = "a"; // why this is right // represented by pointer to first element
   
  //  char i[][10] = {"one","two","three"}; //Same
  //  char *i[10] = {"one","two","three"}; // Same
   char *i = new char[9]; 
   i = "days";
   cout<<&(i)<<endl;
   cout<<(i)<<endl;

   char **j = new char*[10];
   *j = "Orange";*(j+1) = "mango123456789";*(j+2) = "grapes";
   cout<<**j<<" "<<*(j+1)<<" "<<*(*(j+1)+1)<<endl;
   cout<<j<<endl;

   char *milk[] = {"Good Milk","small mild","big milk"};
 
} 