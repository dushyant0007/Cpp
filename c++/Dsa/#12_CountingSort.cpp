#include<iostream>
using namespace std;

// void countingSort(int *arr,int range){
  void countingSort(int arr[],int range,int size){

  int outputArray[size];
  int countArray[range];
  for (int i = 0; i < range; i++)
  {
    countArray[i] = 0;
  }
  for (int i = 0; i < size; i++)
  {
       ++countArray[arr[i]];
  }


cout<<"Count Array = ";
  for(int y = 0; y < range;y++){
    cout<<countArray[y]<<" ";
  }
cout<<endl;


// for (int i = 1; i < range; i++)
// {
//   countArray[i] = countArray[i] + countArray[-1];
// }
// for (int i = 0; i < size; i++)
// {
//   outputArray[--countArray[arr[i]]] = arr[i];
// }
// for (int i = 0; i < size; i++)
// {
//   arr[i] = outputArray[i] ;
// }

  int x = 0;
  for (int i = 0;i < range ; i++)
  {
      if(countArray[i]!=0){
      for(int t = 0; t < countArray[i] ; t++){
            arr[x]=i;
            x++;
            }
      }
  }
}

int main(){

 int arr[7] = {1,4,1,2,7,5,2};

 auto size = sizeof(arr)/sizeof(int);
 
 countingSort(arr,10,size);

cout<<"Output Array = ";
  for(int x = 0; x < 7;x++){
    cout<<arr[x]<<" ";
  }
cout<<endl;


}