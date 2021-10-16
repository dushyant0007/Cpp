#include<iostream>
using namespace std;



int main(){

//  int arr[10] = {1,2,3,4} ;// rest of index --> zero auto inserted
//  int arr1[10]; 
//  int arr2[10];
//  arr1[3] = 121;


// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// for (int i = 0; i <10; i++){
//     cout<<arr[i]<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// // going to print some trash value
// for (int i = 0; i <10 ; i++){
//     cout<<arr1[i]<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// // going to print some trash value expect filled index
// for (int i = 0; i < 10; i++){
//     cout<<arr2[i]<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;


//  SELECTION SORT
 
int n ; 
cout<<"Enter the size of array "<<endl;
cin>>n;
int arr[n] ;

for (int i = 0; i <n; i++){
        cout<<"Enter the "<< i+1  <<" elements of array "<<endl;
        cin>>arr[i];
    }

for (int i = 0; i < n -1 ; i++){

        for (int j = i+1; j < n; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}

    for (int i = 0; i <n; i++){
        cout<<arr[i]<<endl;
    }

}