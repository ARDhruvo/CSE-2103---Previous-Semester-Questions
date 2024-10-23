#include <bits/stdc++.h>
using namespace std;

int front = -1;
int rear = -1;
int deQ[100];

void insertFirst(int val)
{
    if(front == -1)
    {
        front = rear = 0;
    }
    else if(front == 0)
    {
        front = 100 - 1;
    }
    else
    {
        front--;
    }
    deQ[front] = val;
}

void insertLast(int val)
{
    if(rear == -1)
    {
        front = rear = 0;
    }
    else if(rear == 100 - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    deQ[rear] = val;
}

void deleteFirst()
{
    if(front == -1)
    {
        cout << "Dequeue is empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == 100 - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void deleteLast()
{
    if(rear == -1)
    {
        cout << "Dequeue is empty" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = 100 - 1;
    }
    else
    {
        rear--;
    }
}

// void getBoth()
// {
//     cout << "Front = " << deQ[front] << endl << "Rear = " << deQ[rear] << endl;
// }

// int main()
// {
//     insertFirst(3);
//     insertLast(69);
//     getBoth();

//     insertFirst(2);
//     insertFirst(1);
//     insertLast(420);
//     insertLast(42069);
//     getBoth();
    
//     deleteFirst();
//     deleteLast();
//     getBoth();
    
//     deleteFirst();
//     deleteFirst();
//     getBoth();
// }