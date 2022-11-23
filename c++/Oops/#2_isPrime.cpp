#include<iostream>
#include<math.h>
using namespace std;

bool isPrime (int num){
  for (int i = 2; i*i <= num ; i++){
      if (num%i==0){
          return false;
        }   
    }
  return true;  
}



int main(){

  // finding prime numbers between 2 to 100
    for (int i = 2; i <= 100; i++){
      if (i==1){ cout<<"1 is nither prime nor even "<<endl;}
      else if (isPrime(i)){
           cout<<i<<endl;
      }  
    }
    


}