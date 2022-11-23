#include <iostream>
using namespace std;


// We need to give guarantee to compiler that class Tow exist
// for execution of friend function in class One
class Tow; 

class One
{
private:
    int aInOne;
    // friend void Two :: printOneInTow(One &x);
    friend class Two;  
public:
    int bInOne;
    void printInOne()
    {
        cout << "printInOne" << endl;
         cout << "aInOne = "<< aInOne << endl;
          cout << "bInOne = "<< bInOne << endl;
    } 
};

class Two
{
private:
    int aInTwo;
public:
    int bInTwo;
    void printInTwo()
    {
        cout << "printInTow" << endl;
    }
    void printOneInTow(One &x){
        x.bInOne = 9999;
        x.aInOne = 5050; // This line giving error ?
        x.printInOne();
    };
};


int main(){

 One a;

 Two b;
 b.printInTwo();
 b.printOneInTow(a);

 cout<<a.bInOne<<endl;;


}