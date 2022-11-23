#include <iostream>
#include <vector>
using namespace std;

int main()
{

  // Pairs -->

  pair<int, string> pairName = make_pair(2, "KBC");
  // pairName = make_pair(2,"KBC");

  cout << "pairName.first = " << pairName.first << " ,"
       << "pairName.second = " << pairName.second << endl;

  pairName.first = 99;
  pairName.second = "Second";

  cout << "pairName.first = " << pairName.first << " ,"
       << "pairName.second = " << pairName.second << endl;

  pair<int, string> pairName1 = pairName;

  cout << "pairName1.first = " << pairName1.first << " ,"
       << "pairName1.second = " << pairName1.second << endl;

  pair<int, string> &pairName2 = pairName;
  cout << "pairName2.first = " << pairName2.first << " ,"
       << "pairName2.second = " << pairName2.second << endl;

  pairName2.first = 808;
  pairName2.second = "Third";

  cout << "pairName1.first = " << pairName1.first << " ,"
       << "pairName1.second = " << pairName1.second << endl;
  cout << "pairName2.first = " << pairName2.first << " ,"
       << "pairName2.second = " << pairName2.second << endl;

  int a[] = {1, 2, 3};
  int b[] = {22, 33, 44};

  pair<int, int> p_array[3];
  p_array[0].first = 1;
  p_array[0].second = 22;

  p_array[1].first = 2;
  p_array[1].second = 33;

  p_array[2].first = 3;
  p_array[2].second = 44;

  swap(p_array[0], p_array[2]);
  for (int i = 0; i < 3; i++)
  {
    cout << p_array[i].first << "," << p_array[i].second << endl;
  }

  cout << "-------------------tttttttt---------------" << endl;

  // Vectors-->

// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

  vector<int> one;
  cout << "size capicity -> " << one.capacity() << endl;

  one.push_back(99); // Add element
  cout << "size capicity -> " << one.capacity() << endl;

  one.push_back(55);
  cout << "size capicity -> " << one.capacity() << endl;

  one.push_back(43);
  cout << "size capicity -> " << one.capacity() << endl;

  one.push_back(56);
  cout << "size capicity -> " << one.capacity() << endl;

  cout << "Size -> " << one.size() << endl;

  cout << "Element at index 2 -> " << one.at(2) << endl;

  cout << "Front -> " << one.front() << endl;
  cout << "Back -> " << one.back() << endl;

  cout << "Before POP" << endl;
  for (vector<int>::iterator it = one.begin(); it != one.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  one.pop_back(); // Remove The Last element

  cout << "After POP" << endl;
  for (vector<int>::iterator it = one.begin(); it != one.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  vector<int> x(5, 1); // Making vector of size 5 and initialization all the value the one
  cout << "x.capacity " << x.capacity() << endl;
  x.push_back(23);
  cout << "x.capacity " << x.capacity() << endl;

  // Copy vector
  vector<int> cp(x); // Now all the elements of x are in cp
  vector<int>::iterator i = cp.begin();

cout<<*(i)<<endl;
cout<<*(i+1)<<endl;
cout<<*(i+2)<<endl;
cout<<*(i+3)<<endl;
cout<<*(i+4)<<endl;
cout<<*(i+5)<<endl;

// cout<<"->"<<endl;
//   for (vector<int>::iterator it = cp.begin(); it != cp.end(); it++)
//     cout << ' ' << *it;
//   cout << '\n';

  // cp.insert(i,202); // instert 202 at i is pointing (first place)
  // cp.insert(i+2,747); // insert 747 two place after beginning
  cp.insert(i + 4, 10, 161); // insert 161 10 times at i+4 index


  cout << "printing cp " << endl;
  for (int s = 0; s < cp.size(); s++)
  {
    cout << cp[s] << " ";
    // or
    // cout<<cp.at(s)<<" ";
  }

  vector<pair<int, int> > vtr;
  pair<int, int> pr = make_pair(12, 34);
  pair<int, int> pr1 = make_pair(99, 10);
  vtr.push_back(pr);
  vtr.push_back(pr1);
  vtr.push_back(make_pair(5, 33));

  cout << endl;
  // vector <int> v[4];
  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     int value;
  //     cin>>value;
  //     v[i].push_back(value);
  //   }
  // }

  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout<<"-"<<endl;
  //     cout<<v[i].at(j)<<endl;
  //     cout<<v[i][j]<<endl;
  //   }
  // }cout<<"-"<<endl;

  vector<vector<int> > vtr121;
  vector<int> vtr99;
  vtr99.push_back(322);
  vtr99.push_back(32);
  vtr99.push_back(3);
  vtr121.push_back(vtr99);

  cout << vtr121[0].at(1) << endl; // Print 32
  cout << vtr121[0][1] << endl;    // Print 32

  // inbuilt sort function

  int arr[] = {2, 34, 46, 57, 3, 23, 12};
  sort(arr, arr + 7); // itr of sort start and itr of end + 1 sort
                      // for(int x : arr)
                      // cout<<x<<" ";


  // UpperBound and loweBound

// TO use ub and lb the containor should to sorted
// Lower Bound -> It's Going to find the input element or the bigger one
// Upper Bound -> It's Only going to find the bigger one

  int *ubp = lower_bound(arr, arr + 7, 10); // search start, search end+1 and what ot search
  int *lbp = upper_bound(arr, arr + 7, 46); // search start, search end+1 and what ot search
  if (ubp == arr + 7 || lbp == arr)
    cout << "NOt found" << endl;
  else
  {
    cout << "upper bound = " << (*ubp) << endl;
    cout << "Lower bound = " << (*lbp) << endl;
  }
}