#include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 3;
    
    int &p = a;
    int &q = b;
    
    p = 11;
    cout<<a<<endl;

    int *ptr = &a;

    cout<<" "<< ptr <<" "<< *ptr <<endl;

    cout<<" "<< p <<" "<< &p <<" "<< &a <<endl;

}