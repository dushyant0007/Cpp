#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

  fstream myFile;
  myFile.open("fileName.txt", ios::out);
  // now we opining file in write mode
  myFile << "Hello This is first line\n"
            "this is second line"
         << endl;
  myFile.close();

  myFile.open("fileName.txt", ios::app);
  // now we opining file in append mode
  myFile << "Now file in append mode" << endl;
  myFile.close();

  myFile.open("fileName.txt", ios::in);
  // now we opining file in read mode

  string line;

  while (myFile)
  {
    // myFile>>line;
    getline(myFile, line);
    cout << line <<endl;
  }

  myFile.close();
}