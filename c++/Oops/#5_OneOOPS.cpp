#include<iostream>

using namespace std;

class number

{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 20;

};

class inheritNumber : private/*Visibility Mode or access modifiers*/ number
{
    //  Visibility Mode -> write all the perant class data under that
    //   In this case that is private
private:

    
public:
    int g = 10;
    void getValues(){
        // cout<<a<<endl;//private in perent Class -> NOT excessable 
        cout<<"b = "<<b<<endl;//Procted in perent Class
        cout<<"b = "<<c<<endl;//Public in perent Class    
        cout<<"g = "<<g<<endl;   
    }
    
};



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

    inheritNumber num;
    // cout<<num.b<<endl;//Not working because visibility mode is private
    num.getValues();
    

 return 0 ;
}
