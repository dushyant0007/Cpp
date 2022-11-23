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

class Book : protected AbstractIntro{
   protected:
   int price;
   public:
   Book(string title,float rating,int price):AbstractIntro(title,rating){
       this->price = price;
   }
   void display(){
       cout<<"Title = "<<title<<endl;
       cout<<"Rating = "<<rating<<endl;
       cout<<"Price = "<<price<<endl;
   }
};

int main(){

    Book OneT("One and T ",4.7,110);
    OneT.display();

}