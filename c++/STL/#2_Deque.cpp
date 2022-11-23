#include<iostream>
#include<deque> // Double ended queue
using namespace std;


int main()
{
  deque<int> one;
  cout<<"is empty -> "<<one.empty()<<endl;

  one.push_front(15);
  one.push_front(14);
  one.push_front(13);
  one.push_front(12);
  one.push_front(11);
  one.push_back(91);
  one.push_back(92);
  one.push_back(93);
  one.push_back(94);
  one.push_back(95);

  cout<<one.front()<<endl;
  cout<<one.back()<<endl;
  cout<<"is empty -> "<<one.empty()<<endl;

  cout<<"Before Erase"<<one.size()<<endl;
  // one.erase(one.begin()); // Erase element at index one.begin()
  one.erase(one.begin(),one.begin()+4);//Erase from starting to index 3 and stop at index 4
  cout<<"After Erase"<<one.size()<<endl;
  

  deque <int> :: iterator itr = one.begin();
  for ( itr ; itr != one.end(); itr++)
  {
   cout<<*itr<<" ";
  }cout<<endl;
 
  

}