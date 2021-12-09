#include <iostream>
using namespace std;


// We need to give guarantee to compiler that class Tow exist
// for execution of friend function in class One
class Tow; 

class One
{
private:
    int aInOne = 123;
    // friend void Two :: printOneInTow(One x);
    friend class Two;
    
public:
    int bInOne = 456;

    void printInFirst()
    {
        cout << "printInOne" << endl;
    }

    
    
};

class Two
{

private:
    int aInTwo = 444;


public:
    int bInTwo = 777;

    void printInTwo()
    {
        cout << "printInTow" << endl;
    }

    void printOneInTow(One x){
        x.bInOne = 9999;
        x.printInFirst();
        x.aInOne = 5050; // This line giving error ?
    };
    
};


int main()
{
}