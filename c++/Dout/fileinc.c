#include <stdio.h>

int fib (int a){

  if(a<=1) return a;
  else {
    int arr [3];
    arr[0] = 0; arr[1] = 1;
    for (int i = 2; i <=a; i++)
    {
      arr[2] = arr[1]+arr[0];
      arr[0] = arr[1];
      arr[1] = arr[2];
    }
    return arr[2];
  }
  return -1;
}


void main(){

printf("Fibo --> %d ",fib(6));


//  for (int i = 0; i < 4; i++)
//  {
//    for (int j  = 0; j < 2 ; j++)
//    {
//        if(i==2) break;
//         printf("i = %d, j = %d ",i,j);
//    }
//    printf("|-> i = %d <-| ",i);
//  }
 



//  // Mode "r" read / "rb" open to read in binary / "w" open to write
//  // "wb" open to write in binary
//  // "a" open to append

 FILE *fptr = fopen("one.txt","w");
fprintf(fptr,"Hello line one \nThis is line tow \nLine Three");
fclose(fptr);



}
