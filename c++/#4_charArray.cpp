#include<iostream>
using namespace std;



int main(){

//char arr[n+1] ; // because the last  cahr is numll char
 char arr[10] = "Apple";
 char name[30];
 cout<<"Enter the name "<<endl;
 cin>>name;

int i = 0 ;
 while (arr[i] !='\0')
 {
     cout<<arr[i]<<endl;
     i++;       
 }

 cout<<"------------------------------------xxxxxxxxxxxxxxxxxxx-----------------------"<<endl;
 
 i = 0 ;
 while (name[i] !='\0')
 {
     cout<<name[i]<<endl;
     i++;       
 }
 

}