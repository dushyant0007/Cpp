#include <iostream>
using namespace std;

class A{

    protected:
      int a = 66;

};

class B : protected A
{

    public:
      int b = a;

    int abc(){
        return a;
    }
    

};

int main(){

  int j = INT_MAX;

  cout<<sizeof(int)<<endl;

 int p = 17&0;
 cout<<" --- "<<p<<endl;;
  cout<<j;

}