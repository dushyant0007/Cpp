#include <iostream>
using namespace std;

void bubble(int arr[],int arrLen){

for (int j = 0; j < arrLen; j++)
{
  for(int i=j ; i<arrLen; i++){
    if(arr[j] > arr[i]){
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
}
}


void selection(int arr[], int arrLen){
  
 for (int i = 0; i < arrLen; i++)
 {
   int min = i;
   for (int j = i+1; j < arrLen; j++)
   {
      if (arr[min]>arr[j])
      {
        min = j;
      }

   }

    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
   
 }
 

}


int main(){

  int arr[] = {8,3,6,8,3,65,34,2};

  int len = sizeof(arr) / sizeof(arr[0]);

  // bubble(arr,len);
  selection(arr,len);

  for (int i = 0; i < len; i++)
  {
    cout<<" "<<arr[i];
  }
  cout<<""<<endl;

  

}