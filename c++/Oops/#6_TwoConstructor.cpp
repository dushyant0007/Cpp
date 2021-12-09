#include<iostream>
using namespace std;

class Person{

    private:
        string name;
        int age;
        float hight;

  public:
        Person(){
            name = "Null";
            age = 0 ;
            hight = 0.0f;
        }  

        Person(int k){
            cout<< "This is the value of k " << k << endl;
        }

        Person(string nName, int aAge , float hHight){
           
          name = nName;
          age = aAge;
          hight = hHight;
          Person(2020);
          
        }  

        // we also have a defalt copy constructor
     //  or we also can define ourselfs
        Person (Person &addressOfObjectOfStudent){
                cout<<"Copy constructure"<<endl;
                name = addressOfObjectOfStudent.name;
                age = addressOfObjectOfStudent.age;
                hight = addressOfObjectOfStudent.hight;
        }

        // Just like constructor we have distructure
        // get auto call when our object get distroid

        ~Person(){
            cout<<"Distructor is called"<<endl;
        }

       void getData(){
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Hight = "<<hight<<endl;
        }

    bool operator == (Person &a){
         if (name == a.name && age == a.age && hight==a.hight){
             return true;
         }else return false;

         
     } 

        void anyFunction();
        
};

        void Person :: anyFunction(){
            cout<<"Calling anyFunction, body of function is outSide the class "<<endl;

}


class Number{
    public:
        string name;
        int age;
        float hight;
};


int main () {
    
    Number arr[4] ;

        for (int i = 0; i < 4; i++){        

            cout<<"Name = "<<endl;
            cin>>arr[i].name;
            cout<<"Age = "<<endl;
            cin>>arr[i].age;
            cout<<"Hight = "<<endl;
            cin>>arr[i].hight;
            cout<<"------------------------------------"<<endl;
        }
        
        for (int i = 0; i <4; i++){
            cout<<"Name = "<<arr[i].name<<endl;
            cout<<"Age = "<<arr[i].age<<endl;
            cout<<"Hight = "<<arr[i].hight<<endl;
            cout<<"------------------------------------"<<endl;
        }
        

     
    Person t ;
    t.getData();

    cout<<"------------------------------------"<<endl;

    Person t1 ("google",43,12);
    t1.getData();
    t1.anyFunction();
    cout<<"------------------------------------"<<endl;



    // Copy of a object
    Person t2 = t1; // or 
    cout<<"------------------------------------"<<endl;
    Person t3(t1);
    cout<<"------------------------------------"<<endl;
    

    // we also have a defalt copy constructor
    //  or we also can define ourselfs
    Person t4 (t1);
    cout<<"------------------------------------"<<endl;

        // this is for the oprator overLoading
        if (t1==t2){
            cout<<"Same"<<endl;
        }
        else cout<<"Not Same"<<endl;

    cout<<"------------------------------------"<<endl;


    // At the end of the program 
    // All the object get distroy and the distructor is called for all the object we made 

}

