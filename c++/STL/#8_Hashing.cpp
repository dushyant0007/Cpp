#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

  unordered_set<string> set;
  set.insert("Insert the string");
  set.insert("Insert another string");

  // set.find("Insert the string") // Return the itr, if value does't exist return itr of end
  if (set.find("Insert the string") == set.end() | set.count("Insert the string") == 0)
    cout << "Data Not found" << endl;
  else
    cout << "Data Found" << endl;
 
  if (set.find("Insert") == set.end())
    cout << "Data Not found" << endl;
  else
    cout << "Data Found" << endl;
} 