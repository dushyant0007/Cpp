#include<iostream>
using namespace std;
class Base
{
private:
    int a;
    int b;
public:
    
    void set(){
        a = 10;
        b = 20;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }

};

class Sum : private Base
{
  
public:
    void print(){
        set();
        cout<<getA()+getB()<<endl;
    }
    
};

int main(){
    Sum obj ;
    obj.print();
}