#include<iostream>
#include<string>
using namespace std;

int rear = -1;
int front = -1;
int n = 4;
int arr[4];

bool isEmpty()
{
    return (rear == front);
}

bool isFull()
{
    return (rear == n - 1);
}

void enqueue(int customer)
{
    if(isFull())
    {
        cout << " Sorry, the coffee line is full! Please wait...\n";
    }
    else
    {
        rear++;
        arr[rear] = customer;
        cout << " Customer added! Your token number: " << rear + 1 << endl;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        cout << " No customers to serve!\n";
    }
    else
    {
        front++;
        cout << " Served customer with token no: " << arr[front] << endl;
    }
}

void display()
{
    if(isEmpty() || front == rear)
    {
        cout << " The coffee line is empty.\n";
    }
    else
    {
        cout << "\n Current Coffee Line:\n";
        for(int k = front + 1; k <= rear; k++)
        {
            cout << " - Customer with token no: " << arr[k] << endl;
        }
    }
}

int main()
{
    cout << " Welcome to the Coffee Shop Queue System \n\n";

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    display();

    cout << "\n--- Serving Customers ---\n";
    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue();

    return 0;
}
