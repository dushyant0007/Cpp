#include<iostream>
#include<stdio.h>
using namespace std;

// typedef int iio;
// using letter = char;

 int add(int a,int b){
  return a+b;
 };

// (*ptr).code = ptr->code;
int main(){

  const int ci = 0,&cj = ci;
  int ix = 44;
  decltype(ci) xp = 0;
  decltype(cj) yx = xp;
  //decltype((ix)) c; // it going to return the type which reference to i, and reference should be initialize


  int ival = 39;
  int &vval = ival; // reference can't reference to any other value
  // must be initialize at the time of declaration
  
  const int &io = 80; //only in case of const
  constexpr int to = 90;// const expression (const + value available at compile time) 
  // const int *yu -> pointer pointing to const obj
  // constexpr int *uu -> pointer itself const 
   
   int ax[10] = {[0] = 11,[4]=6}; //rest of number are initialized with zero

  int arr[3][5] = {{1,2,3,4,5},{11,22,33,44,55},{12,23,34,45,88}};
  for (int *i = &arr[0][0],x=0; i<=&arr[3-1][5-1] ; i=i+1,x++)
  {
      if(x%5==0 && x!=0){cout<<endl;}
      cout<<*i<<" ";
      
  }

 // Pointer pointing to an entire array
 int a[5] = {1,2,3,4,5};
 int *p = a; // pointer to the first element of an array
 cout<<*p<<endl;

  // int *y[5] = array of pointers
 int (*u)[5] = &a;
 //*u indicates pointer to the whole array of 5 elements
 // *u element is a pinter to 5 integer elements

cout<<"----------------------"<<endl;

 // "string literals" anything in b/w dual cots // String literals are const (read only)
 // Stored in memory as an array with last element null char (\0)
 // Compiler read whole string literals as pointer(address of first element) to first element

 
  
//  int *ptr(int a,int b) = add;
//   int ans = ptr(4,4);

int x; // The variable is declared and initialized by zero
extern int pp ; // The variable is only declared 
// we use this to tell compiler to search the value p which is defined in any other file 
// so we can use it in this file

//register int var; // this all memory of register to be allocated to this variable which is faster the other memories

 int tt = 9;
 const int *tp = &tt; // pointer pointing to const obj or *tp cant change the value of pointing obj
// But can dereference to any other obj

 int* const gt = &tt; // can't dereference the pointer
  *gt = 90;
 cout<<"---> "<<tt<<endl;

};