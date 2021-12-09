#include <iostream>
#include <string>
using namespace std;

class Stack
{

    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }

    void push(int value)
    {
        if (isFull() == true)
        {
            cout << "STACK OVERFLOW" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    int pop()
    {
        if (isEmpty() == true)
        {
            cout << "STACK UNDERFLOW" << endl;
            return -1;
        }
        else
        {
            int topValue = arr[top];
            arr[top] = 0;
            top--;
            return topValue;
        }
    }
    // return how many values are in the stack
    int count()
    {
        return top + 1;
    }
    //   return the value to on the top of peak or index
    int peak(int position)
    {
        if (isFull() == true)
        {
            cout << "The Stack is Full" << endl;
            return -1;
        }
        else
        {
            return arr[position];
        }
    }
    //   change the value in the stack
    void change(int position, int value)
    {
        if (position >= 5 || position < 0)
        {
            cout << "There are only 4 position in the stack" << endl;
        }
        else
        {
            arr[position] = value;
            cout << "The value" << value << " is changed at postiton " << position << endl;
        }
    }

    void display()
    {
        for (int i = 4; i >= 0; i--)
        {   
            cout<<arr[i]<<" "<<endl;
            cout << "" << endl;
        }
    }
};

int main()
{
    int option, position, value;

    Stack s1;

    do
    {

        cout << "Enter 0 to exit " << endl;
        cout << "Enter 1 to push() " << endl;
        cout << "Enter 2 to pop() " << endl;
        cout << "Enter 3 to isEmpty()" << endl;
        cout << "Enter 4 to isFull()" << endl;
        cout << "Enter 5 to peak()" << endl;
        cout << "Enter 6 to coutn()" << endl;
        cout << "Enter 7 to chage()" << endl;
        cout << "Enter 8 to display()" << endl;
        cout << "Enter 9 to Clear Screen" << endl;

        cin >> option;
        if (option == 0)
        {
            break;
        }

        switch (option)
        {
        case 1:
            cout << "Enter an item to push into the stack" << endl;
            cin >> value;
            s1.push(value);

            break;

        case 2:
            cout << "pop function is called, pop value is " << s1.pop() << endl;
            break;
        case 3:
            cout << "The stack is empty = " << s1.isEmpty() << endl;
            break;
        case 4:
            cout << "The stack is full = " << s1.isFull()<< endl;
            break;
        case 5:
            cout << "Enter the position to find out the value on peek" << endl;
            cin >> position;
            cout << "The value at peek is = " << s1.peak(position) << endl;
            break;
        case 6:
            cout << s1.count() << " values are in the stack" << endl;
            break;
        case 7:
            cout << "Enter the value of posotion" << endl;
            cin >> position;
            cout << "Enter the value of to insert" << endl;
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display function is called" << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            system("clear");
        
            break;

        default:
            cout << "Enter Proper Option Number" << endl;
            break;
        }

    } while (option != 0);
}
