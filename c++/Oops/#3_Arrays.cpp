#include<iostream>
using namespace std;



int main(){

 int arr[10] = {1,2,3,4} ;// at remaining --> zero auto inserted
 int arr1[10]; 
 arr1[3] = 121;

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// for (int i = 0; i <10; i++){
//     cout<<arr[i]<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// going to print some trash value
// for (int i = 0; i <10 ; i++){
//     cout<<arr1[i]<<endl;
// };

// for(int i : arr1){
//   cout<<i<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;

// // going to print some trash value expect filled index
// for (int i = 0; i < 10; i++){
//     cout<<arr2[i]<<endl;
// }

// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;


//  SELECTION SORT
 
// int n ; 
// cout<<"Enter the size of array "<<endl;
// cin>>n;
// int arr[n] ;

// for (int i = 0; i <n; i++){
//         cout<<"Enter the "<< i+1  <<" elements of array "<<endl;
//         cin>>arr[i];
//     }

// for (int i = 0; i < n -1 ; i++){
//          for (int j = i+1; j < n; j++){
//             if (arr[i] > arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
// }

//     for (int i = 0; i <n; i++){
//         cout<<arr[i]<<endl;
//     }


// cout<<"-------------------xxxxxxxxxxxxxxxxxx---------------------------xxxxxxxxxxxxxxxxxx----------"<<endl;


    // Dimensions of the array
    int m = 3, n = 4, c = 0;
 
    // Declare memory block of size M
    int** a = new int*[m];
 
    for (int i = 0; i < m; i++) {
 
        // Declare a memory block
        // of size n
        a[i] = new int[n];
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Assign values to the
            // memory blocks created
            a[i][j] = ++c;
        }
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Print the values of
            // memory blocks created
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
   
      //Delete the array created
      for(int i=0;i<m;i++)    //To delete the inner arrays
      delete [] a[i];   
      delete [] a;              //To delete the outer array
                              //which contained the pointers
                              //of all the inner arrays
     
      return 0;
}

