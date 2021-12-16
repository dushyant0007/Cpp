#include <iostream>
using namespace std;

int main()
{
  float a, b, result;
  cout << "Enter the N / D" << endl;
  cin >> a;
  cin >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    else
    {
      result = a / b;
      cout << "The result is " << result << endl;
    }
  }
  catch (float ex)
  {
    cout << "Division by Zero is not allowed" << endl;
  }
}