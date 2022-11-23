//
//  main.cpp
//  mycpp
//
//  Created by Dushyant Jakhar on 23/09/22.
//
#include <iostream>
#include "math.hpp"
using namespace std;

//This file contain tow log funtion avalable to linker (one in main and one in math), which one to link ?
// TO solve this proble we can use static symbol which means the item is only avalabel for internal inking or you can make funtion inline in math.hpp

int Multiply(int a, int b){
  Log("Multiply");
  return a*b;
}

//static void text(){
//    cout<<"text in main"<<endl;
//}
//or


void text();

//extern void text(){
//    cout<<"text in main"<<endl;
//}



extern int x ;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<Multiply(5,8)<<endl;
    cout<<x<<endl;
    text();
    
}
