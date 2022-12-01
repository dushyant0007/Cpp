# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

// Allow to write inline anonymous
// [capture claus](parameters){function definition} 

int main(){

 int d;
 int e;
 
 cout<<"HELLO"<<endl;

vector <int> v ;
 v.push_back(2);
 v.push_back(3);

for_each(v.begin(),v.end(),[&d,e](int x){cout<<" x "<<endl;}) ;

// [&](int x){cout<<" x "<<endl;}
// Access all variable with referance

// [=](int x){cout<<" x "<<endl;}
//Access all variables with value

}