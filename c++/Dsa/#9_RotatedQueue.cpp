#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int itemCount;
    int arr[5];

public:
    Queue()
    {   itemCount = 0;
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {

        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {

        if ((rear+1)%5 == front)
        {
            return true;
        }
        else
            return false;
    }

    void inqueue(int value)
    {  
        if (isFull())
        {
            cout << "The Queue is Full" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            //rear++;
            rear = (rear+1)%5; // 5 == array length
        }
        arr[rear] = value;
        itemCount ++;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        // else if (rear == 0 && front == 0)
        else if (front == rear)
        {
            int x = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            int x = arr[front];
            arr[front] = 0;
            front = (front+1)%5;
        }
        itemCount++;
        return -1;
    }

    int count()
    {
        return itemCount;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "" << endl;
        }
    }
};

int main()
{
    Queue s1;
    int value, option;

    do
    {
        cout << "Select The Option / Enter 0 to exit" << endl;
        cout << "Enter 1 to Enqueue()" << endl;
        cout << "Enter 2 to Dequeue()" << endl;
        cout << "Enter 3 to isEmpty()" << endl;
        cout << "Enter 5 to isFull()" << endl;
        cout << "Enter 5 to display()" << endl;

        cin >> option;
        if (option == 0)
        {
            break;
        }

        switch (option)
        {
        case 1:
            cin >> value;
            s1.inqueue(value);
            break;
        case 2:
            s1.dequeue();
            break;
        case 3:
            s1.isEmpty();
            break;
        case 4:
            s1.isFull();
            break;
        case 5:
              s1.display();
              break;    

        default:
            cout << "Enter correct option" << endl;
            break;
        }

    } while (option != 0);
}