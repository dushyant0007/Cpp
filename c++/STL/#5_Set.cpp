
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{

  // Set store unique elements in sorted order
  set<int> s;
  s.insert(57);
  s.insert(34);
  s.insert(88);
  s.insert(93);
  s.insert(34);

  // for (int x : s)
  //   cout << x << endl;
  // cout << "--" << endl;

  for (set<int>::iterator itr = s.begin(); itr != s.end(); itr++)
    cout << *itr << " ";
  cout << endl;

  cout << "Is 55 Presert -> " << s.count(55) << endl;
  cout << "Is 88 Presert -> " << s.count(88) << endl;

  // unordered set
  // store unique element in the way you inserted
  unordered_set<int> ss;
  ss.insert(57);
  ss.insert(88);
  ss.insert(93);
  ss.insert(34);

  // cout << "--" << endl;
  // for (int x : ss)
  //   cout << x << endl;

  // Multiset // Can have multiple elements with same value

  multiset<int> ms;
  ms.insert(57);
  ms.insert(34);
  ms.insert(99);
  ms.insert(88);
  ms.insert(93);
  ms.insert(99);
  ms.insert(34);

  multiset<int>::iterator ms_itr = ms.find(99); // Going to return ptr on first one
  s.erase(99);                                  // Going to erase all the values having weight of 99
}