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
      // Here only one throw statement is allowed
      throw b;
    }
    else
    {
      result = a / b;
      cout << "The result is " << result << endl;
    }
  }
  //Here only one arrgument is allowed
  // Here ex represent the value of b (line no.14)

  catch (float ex)
  {
    cout << "Division by Zero is not allowed " << ex << endl;
  }

};