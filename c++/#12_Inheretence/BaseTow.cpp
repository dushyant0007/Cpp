#include <iostream>
using namespace std;

class T
{
    int t1, t2, t3, t4;

public:
    void setValuesT(int t1, int t2, int t3, int t4)
    {
        this->t1 = t1;
        this->t2 = t2;
        this->t3 = t3;
        this->t4 = t4;
        cout << "(*this).s1 " << (*this).t1 << endl;
        cout << "(this)->s1 " << (this)->t1 << endl;
    }

    int tSum()
    {

        int sum = t1 + t2 + t3 + t4;
        return sum;
    }

 void printMessage(){

       cout<<"printMessage messages in class T"<<endl;

    }

};

class P
{

     int p1, p2, p3, p4;

public:
    void setValuesP(int p1, int p2, int p3, int p4)
    {
        this->p1 = p1;
        this->p2 = p2;
        this->p3 = p3;
        this->p4 = p4;
 
    }

    int pSum()
    {

        int sum = p1 + p2 + p3 + p4;
        return sum;
    }
   void printMessage(){

       cout<<"printMessage messages in class P"<<endl;

    }

};

class Total : public T , public P {

    public:
    // which print function to call when defined in all the classes
    void printMessage(){
        P::printMessage();
    }
    
};

int main(){

    Total *obj = new Total();
    obj->printMessage();
    obj->setValuesP(1,2,3,4);
    obj->setValuesT(10,20,30,40);
    cout<<"obj->pSum() "<<obj->pSum()<<endl;
    cout<<"obj->tSum() "<<obj->tSum()<<endl;


}