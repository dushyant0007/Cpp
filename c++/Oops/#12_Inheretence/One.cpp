#include <iostream>
using namespace std;

// single level     -----------> one to one
// multilevel       -----------> one to one to one
// multiple         -----------> many to one
// hierarchical     -----------> one to many
// hybrid           -----------> many to one to one



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

 int p = 12&14;
 cout<<" --- "<<p<<endl;
  cout<<j;

}