#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

 vector<int> v ;

 v.push_back(64);
 v.push_back(23);
 v.push_back(65);
 v.push_back(23);
 v.push_back(26);

 sort(v.begin(),v.end());
 sort(v.begin(),v.end(),greater<int>()); // Sort in Decending Order
  



  int arr[] = {2, 34, 46, 57, 3, 23, 12};
  sort(arr, arr + 7); // itr of sort start and itr of end + 1 sort
                      // for(int x : arr)
                      // cout<<x<<" ";

  // UpperBound and loweBound

  int *ubp = lower_bound(arr, arr + 7, 12); // search start, search end+1 and what ot search
  int *lbp = upper_bound(arr, arr + 7, 46); // search start, search end+1 and what ot search
  if (ubp == arr + 7 || lbp == arr + 7)
    cout << "NOt found" << endl;
  else
  {
    cout << "upper bound = " << (*ubp) << endl;
    cout << "Lower bound = " << (*lbp) << endl;
  }  


  // MIN Element
  cout<<"Min Element"<<*(min_element(arr,arr+7))<<endl;
  // MAX Element
  cout<<"Max Element"<<*(max_element(arr,arr+7))<<endl;
 
  //  int sum= accumulate(arr,arr+7,0); // first , last+1, initialSum
 int TimesNoOfFourOccuringInVector = count(v.begin(),v.end(),4);

  reverse(arr,arr+7);// Used for array,vector,string

  string xyz = "HELLO";
  reverse(xyz.begin(),xyz.end());
  cout<<xyz<<endl;

  // Lemada function
  //  auto sum1 = [](int x){return x+2;}(3);
  //  auto sum2 = [](int x,int y){return x+y+2;}(3,5);
    // sum2(23,32);
  // for_each(arr,arr+7,[](int x){return x+2;});
  
  vector<int> lf ;
  lf.push_back(32);
  lf.push_back(423);
  lf.push_back(3445);
  lf.push_back(78);
  lf.push_back(34);
  lf.push_back(87);

 // cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // One Element return false output = false
 // cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // return true if all elements return false
 // cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; // if any element return true the function return true




}