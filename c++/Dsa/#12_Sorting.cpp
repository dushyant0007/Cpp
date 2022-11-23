#include <iostream>
using namespace std;

void bubble(int arr[],int arrLen){

for (int j = 0; j < arrLen - 1; j++)
{
  for(int i=j+1 ; i<arrLen; i++){
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


void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
   }
}


void insertionSort2(int arr[],int size){  

  for (int i = 1; i < size; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if(arr[j]>arr[i]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
    
  }

}
    
void insertionSort3(int arr[],int size){

  for (int y= 1; y< size; y++){
    int key = arr[y];
     int x = y-1;
  for(x = y-1;x>=0 && arr[x]>key;x--){    
     arr[x+1] = arr[x];
   }
    arr[x+1] = key;
  }

}




void merge_x(int arr[],int l,int m, int r){

  int i = l; //Starting index of left subarray
  int j = m+1; //Starting index of right subarray
  int k = 0; //Starting index of temp array

  int temp[r-l+1];

  while (i<=m && j<=r)
  {
    if (arr[i]<=arr[j])
    {
      temp[k]=arr[i];
      i++;
      k++;
    }
    else{
      temp[k] = arr[j];
      j++;
      k++; 
    }
  }
  
while (i<=m)
{
  temp[k] = arr[i];
  i++;
  k++;
}
while (j<=r)
{
  temp[k] = arr[j];
  j++;
  k++;
}
  int x = l;
  for (int i = 0; i < r-l+1; i++)
  {
    arr[x++] = temp[i];
    
  }
  
}


void mSort(int arr[],int l , int r){
 if (l>=r)
 {
   return;
 }
 else{
 int m = (l+r)/2;
  mSort(arr,l,m);
  mSort(arr,m+1,r);
  merge_x(arr,l,m,r);
 }
}



int partition(int arr[],int s,int e){

 int pivot = arr[e];
 int pIndex = s;

// e is the pivot element
for (int i = s; i < e ; i++)
{
 if (arr[i]<=pivot)
 {
   swap(arr[i],arr[pIndex]);
   pIndex++;
 }
}
swap(arr[pIndex],arr[e]);
return pIndex;

}

void quickSort(int arr[],int s, int e){
  if (s>=e)
  {
    return;
  }
  else{
    int  p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
  }
}


int main(){

  int arr[] ={8,3,6,8,3,65,34,2};

  // int *a = new int (3);
  // *a = 11;


  int len = sizeof(arr) / sizeof(int);

for (int i = 0; i < len; i++)
  {
    cout<<" "<<arr[i];
  }
  cout<<""<<endl;

  // bubble(arr,len);
  // // selection(arr,len);
  // insertionSort2(arr,len);
  // quickSort(arr,0,len);

  insertionSort3(arr,len);


  for (int i = 0; i < len; i++)
  {
    cout<<" "<<arr[i];
  }
  cout<<""<<endl;

  

// -----------> Doubt <-------------
  // int *arr = new int [10];
  // arr[0] = 10;
  // arr[1] = 293;
  // arr[2] = 6672;
  // arr[7] = 5584;
  // cout<<arr[0]<<endl;
  // cout<<*arr<<endl;
  // cout<<arr<<endl;
}