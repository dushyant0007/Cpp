#include<iostream>
#include<list>
using namespace std;

int main(){

   list<int> l;
  //  list<int> :: iterator itr = l.begin();

   l.push_front(43);
   l.push_front(42);
   l.push_front(41);

   l.push_back(93);
   l.push_back(92);
   l.push_back(91);

   list<int> :: iterator it = l.begin();
   l.insert(it,20);

  


   for( list<int> :: iterator itr = l.begin(); itr != l.end() ;itr++)
    {
      cout<<*itr<<endl;
    }

}