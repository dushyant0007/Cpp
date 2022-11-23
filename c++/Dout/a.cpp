#include <iostream>
using namespace std;

int **name()
{
    int **a = new int *[4];

    for (int i = 0; i < 4; i++)
    {   
        *(a+i) = new int[5]; // Both are same
        a[i] = new int[5];
    
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return a;
}

struct Hello{
    int x;
    // int *y ;
    int *y = new int(8);
    int t = 9;
    string name;
};

int main()
{

    {Hello one ;
    one.name = "Name of first HElLo";
    one.x = 11;
    cout<<"--><--"<<endl;
    cout<<one.name<<endl;
    cout<<one.x<<endl;
    cout<<"--><--"<<endl;}



   {Hello abc[10];
   abc->name = "name in array";
   abc->x = 2232;  //both are same
   abc[0].x = 90909;  //both are same
   abc[4].name = "abc[4].name";
   int x = 11;
   abc->y = &x;
   abc[0].y = &x;
   abc->y = new int(32);
   cout<<abc->y<<abc->name<<endl<<abc->x<<endl<<abc[4].name<<endl;}


    // int **a = new int *[4];
    // a = name();

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << a[i][j];
    //         *(*(a+i)+j+1) = 66;
    //     }
    //     cout << endl;
    // }

    cout<<"-------------"<<endl;

    // In this case the pointer can't change the data value
    // const int * a = new int(10);
    // cout<<*a<<endl;
    // int *b = new int(2);
    // a = b;
    // cout<<*a<<endl;

    // cout<<"-------------"<<endl;

    // const int x = 90;
    // int *y = new int(23);
    // cout<<*y<<endl;
    // y = (int*)&x; // Here we changed const int*x to int*x
    // cout<<*y<<endl;
    // *y = 8;
    // cout<<*y<<" "<<x<<endl;
    // Output 8 90

    // cout<<"-------------"<<endl;

    // const int *p = new int(10);
    // cout<<*p<<endl;
    // int *q = new int(2);
    // p = (int*) q;
    // cout<<*p<<endl;

    // cout<<"-------------"<<endl;

    // In this case the pinter can't point any other memory block
    // int* const aa = new int(10);
}