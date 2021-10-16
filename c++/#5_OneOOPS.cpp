#include<iostream>

using namespace std;

class house{

 private:
    // Member variables
    int length  , breadth  ;

 public:
    // Member Functions
    void setData (int a , int b){
        length = a;
        breadth = b;
    }
    void area (){
        cout<<"The value of area is "<<length*breadth<<endl;
    }

};

int main (){

    house g ;
    g.setData(2,5);
    g.area();

 return 0 ;
}
