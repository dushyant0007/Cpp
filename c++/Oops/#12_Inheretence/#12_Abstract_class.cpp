#include <iostream>
using namespace std;

// An abstract class contains at least one pure virtual function.

class AbstractIntro{
    
    protected:
        string title;
        float rating;
    public:
        AbstractIntro(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;
        //Now this function is pure virtual
        // Overriding the function in base class is compulsory

};
