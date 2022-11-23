#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    // static int count = 100;// This is wrong

public:
    void setData(void){
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void){
        cout << "The id of this employee is " << id << " and employee number is" << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
     void getCount1(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0 //writing this is part of syntex
// int Employee::count = 100; // Now the count start from 100

int main(){
    Employee happy, bob, jarry;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    happy.setData();
    happy.getData();
    Employee::getCount();

    bob.setData();
    bob.getData();
    Employee::getCount();

    jarry.setData();
    jarry.getData();
    // Employee::getCount();
    jarry.getCount1();

    return 0;
}