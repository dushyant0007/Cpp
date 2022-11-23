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
    x.c = 101;
    cout<<"c = "<<x.c<<endl;
    x.print();
}

void printObjectTypeTwo(One* x){
    cout<<"a = "<<x->a<<endl;
    cout<<"b = "<<x->b<<endl;
    x->c = 202;
    cout<<"c = "<<x->c<<endl;
    x->print();
}


int main(){

    One firstObject ;
    printObject(firstObject);
    cout<<"ASDFasdf "<<firstObject.c<<endl;
    // cout<<firstObject.c<<endl;

    cout<<"=========="<<endl;

    One secondObject ;
    printObject(secondObject);
    cout<<"ASDFasdf "<<firstObject.c<<endl;

    cout<<"=========="<<endl;

    printObjectTypeTwo(&secondObject);
    cout<<"asdf "<< secondObject.c<<endl;

    cout<<"=========="<<endl;


   

}