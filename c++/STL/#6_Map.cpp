#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

  // ordered mad  Going to store data according to the key in accending order
  map<int, string> m;
  m[1] = "HEllO";
  m[12] = "Jai";
  m[2] = "Tata";
  m[12] = "Jai_One"; // EVERY key is unique so the value get replaced
  m.insert(pair<int, string>(5, "BIK"));

  for (map<int, string>::iterator itr = m.begin(); itr != m.end(); itr++)
    // cout<<itr->first<<" "; // Going To print key
    cout << itr->second << " "; // Going to print value
  cout << endl;

  // OR ->

  // for(auto s : m)
  //  cout<<s.first<<" ";
  // cout<<endl;

  cout << "Key 6 exist ? " << m.count(6) << endl;

  cout << "Erase key 5 " << m.erase(5) << endl; // also accept itr input  as input

  map<int, string>::iterator itr2 = m.find(2); // return iterator / Only accepts key
  cout << itr2->second << endl;

  // UnOrdered Map

  unordered_map<int, string> um;
  um[1] = "HEllO";
  um[2] = "Jai";
  um[3] = "Tata";
  um[4] = "Jai_One"; // EVERY key is unique so the value get replaced
  um.insert(pair<int, string>(5, "BIK"));

  for (unordered_map<int, string>::iterator itr = um.begin(); itr != um.end(); itr++)
    // cout<<itr->first<<" "; // Going To print key
    cout << itr->second << " "; // Going to print value
  cout << endl;
}