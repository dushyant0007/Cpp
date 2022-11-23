#include <iostream>
using namespace std;

void countingSort(int *arr,int size,int div){
   int outputArray[size];
   int countArray[10];
   for (int i=0;i<10;i++)
   {
     countArray[i] = 0;
   }
   for (int i = 0; i < size; i++)
   {
      if (arr[i]!=0)
      {
        ++countArray[(arr[i]/div)%10];
      } 
   }

  //  for (int i = 1; i < 10; i++)
  //  {
  //    countArray[i] = countArray[i]+countArray[i-1];
  //  }
  //  for (int i = size-1; i >=0 ; i--)
  //  {
  //    outputArray[--countArray[((arr[i]/div)%10)]] = arr[i];
  //  }

int x = 0;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < size; j++)
    {
        if((arr[j]/div)%10 == i ){
            outputArray[x] = arr[j];
            x++;
        }
    }
  }
  

   for (int i = 0; i < size; i++)
   {
     arr[i] = outputArray[i];
   }
}

int max (int *arr,int size){

 int max = arr[0];
 for(int a = 1; a < size; a++){
    if (max<arr[a])
    {
      max = arr[a];
    }
 }
 return max;
}

void radixSort(int *arr,int size){

 int m = max(arr,size);

 for (int div = 1; 0< m/div ; div=div*10)
 {
    countingSort(arr,size,div);
 }
 
} 




int main(){

  int arr[8] = {170,45,75,90,802,24,2,66};
  int size = sizeof(arr)/sizeof(*arr);
  cout<<"Size "<<size<<endl;

  radixSort(arr,size);
  
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<", ";
  }
  cout<<endl;

}