#include<iostream>
#include<stack>
using namespace std;

int main(){

  stack<string> s ;
  s.push("A");
  s.push("B");
  s.push("C");
  s.push("D");

  cout<<"Top Element "<<s.top()<<endl;
  s.pop();

}