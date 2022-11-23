#include<iostream>
#include<queue>
using namespace std;

int main(){

  queue<string> s ;
  s.push("A");
  s.push("B");
  s.push("C");
  s.push("D");

  cout<<s.front()<<endl;
  s.pop();
  s.pop();
  cout<<s.front()<<endl;



  //Max Heap
  priority_queue<int> p ;
  p.push(12);
  p.push(40);
  p.push(11);
  cout<<"Top in p queue "<<p.top()<<endl;

  cout<<"Max Heap ->"<<endl;
  int pn = p.size();
  for (int i = 0; i < pn; i++)
  {
    cout<<p.top()<<endl;
    p.pop();
  }


  //Min Heap
  priority_queue<int,vector<int>,greater<int> > mini;
  mini.push(12);
  mini.push(40);
  mini.push(11);
  mini.push(5);

  cout<<"Min Heap ->"<<endl;
  int n = mini.size();
  for (int i = 0; i < n; i++)
  {
    cout<<mini.top()<<endl;
    mini.pop();
  }
  


  

}