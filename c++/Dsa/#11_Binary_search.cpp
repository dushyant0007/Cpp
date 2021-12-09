#include <iostream>
using namespace std;

// Return index
int bSearch(int arr[], int target, int arrLen)
{

  int s = 0;
  int e = arrLen - 1;

  while (e > s)
  {

    int mid = s + (e - s) / 2;

    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {1, 3, 6, 9, 12, 45, 65};

  int len = sizeof(arr) / sizeof(arr[0]);
  cout << "Length = " << len << endl;

  int ans = bSearch(arr, 9, 7);
  cout << "Ans = " << ans << endl;
  
}
