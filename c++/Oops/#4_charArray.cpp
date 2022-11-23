#include<iostream>
#include <string>
using namespace std;

int main(){
//char arr[n+1] ; // because the last  char is null char
 char arr[10] = "Apple";
 char name[30];
 cout<<"Enter the name "<<endl;
cin>>name;

int i = 0 ;
 while (arr[i])
//  or  while (arr[i] !='\0')
 {
     cout<<arr[i];
     i++;       
 }
 cout<<endl;

 cout<<"------------------------------------xxxxxxxxxxxxxxxxxxx-----------------------"<<endl;
 
 i = 0 ;
 while (name[i] !='\0')
 {
     cout<<name[i];
     i++;       
 }
  cout<<endl;


}