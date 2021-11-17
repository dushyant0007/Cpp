#include<iostream>
using namespace std;

class One
{

    private:
        int a = 20;
    protected:
        int b = 30;
    public:
        int c = 40;
        int print(){
            return 2021;
        }       
        void friend printObject(One x);
        void friend printObjectTypeTwo(One* x);

};

void printObject(One x){
    cout<<"a = "<<x.a<<endl;
    cout<<"b = "<<x.b<<endl;
    cout<<"c = "<<x.c<<endl;
    x.print();
}

void printObjectTypeTwo(One* x){
    cout<<"a = "<<x->a<<endl;
    cout<<"b = "<<x->b<<endl;
    cout<<"c = "<<x->c<<endl;
    x->print();
}


int main(){

    One firstObject ;
    printObject(firstObject);
    // cout<<firstObject.c<<endl;
    cout<<"=========="<<endl;

    One *secondObject = new One;
    printObject(*secondObject);
    

    cout<<"=========="<<endl;

    printObjectTypeTwo(secondObject);
    cout<<"=========="<<endl;


    (*secondObject).c = 1000000;

    cout<<(secondObject)->c<<endl;

}