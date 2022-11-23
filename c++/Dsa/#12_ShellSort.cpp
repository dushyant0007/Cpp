#include<iostream>
using namespace std;

void shellSort(int arr[],int len){


for (int gap = len/2; gap >0 ; gap = gap/2)
{
  int x = 0;
  for (int i = gap; i < len; i++)
  {
    if(arr[x]>arr[i]){
      swap(arr[x],arr[i]);

          for (int p = 0 ; p<len ;p++)
          {
            cout<<arr[p]<<" ,";
          }
          cout<<endl;

      if (x-gap > -1)
      {
        if (arr[x-i]>arr[x])
        {
          swap(arr[x-i],arr[x]);
        }
        
      }
      
    }
      x++;    
  }
}
}

int main(){

 int arr[] = {120,77,23,6,32,89,51};

 shellSort(arr,7);
 
 for (int i : arr)
 {
  cout<<i<<" ,";
 }
 


}