#include <iostream>
using namespace std;


template <typename Q> Q add(Q x,Q y){
  return x+y;
}

template <typename Q,typename R> R addTow(Q x,R y){
  return x+y;
}

int main(){

 int p = add(1,2);
 float t = add(1,2);
 float r = add(1.4,2.4);
 int x = add<float>(12.2,1.1);

 cout<<p<<endl;
 cout<<t<<endl;
 cout<<r<<endl;
 cout<<x<<endl;

cout<<"---------------------"<<endl;

 cout<<addTow<int,float>(12,13.5)<<endl;


}