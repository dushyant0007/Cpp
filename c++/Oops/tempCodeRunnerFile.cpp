#include<iostream>
#include<fstream>
using namespace std;


static int Sum(int a,int  b){

  cout<<"Cout in Sum Function "<<a+b<<endl;
  return a+b; 
}



int main(){
  // int a = 19;
  // int  b = 16;
  // int c = Sum(a,b);
  // cout<<"The value of a+b = "<<c<<endl;

  int i = 0;

  fstream myFile;
  myFile.open("Hello.txt", ios::out);
  // now we opining file in write mode
  while (i<400000000)
  {
  myFile << 
           "Hello This is i line"
         << endl;
         i++;
  }
  
  myFile.close();

}