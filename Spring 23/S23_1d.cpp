#include <bits/stdc++.h>
using namespace std;

queue<int> q1, q2;

void STACK(string cmd, int val)
{
    if (cmd == "push")
    {
        while (!q1.empty()) // Use q2 to empty q1
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(val);       // Send the newest value in front of the queue so it comes out when top is used
        while (!q2.empty()) // Put the rest back on q1 to ensure the stack serial is maintained
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    else if (cmd == "pop")
    {
        if (q1.empty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            q1.pop();
        }
    }
    else if (cmd == "top")
    {
        if (q1.empty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << q1.front() << endl;
        }
    }
}

// int main()
// {

//     STACK("push", 1);
//     STACK("push", 2);
//     STACK("push", 69);
//     STACK("push", 420);
//     STACK("top", 0);
//     STACK("pop", 0);
//     STACK("top", 0);
// }
