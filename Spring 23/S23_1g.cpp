#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void modifiedHandT()
{
    node *hare = root;
    node *tortoise = root;
    while ((hare != NULL) && (hare->next != NULL))
    {
        hare = hare->next->next;
        tortoise = tortoise->next; // Mid point is equal to (total/2). So, if we set hare at 2*tortoise speed, the place where the hare reaches end will be the midpoint ASSUMING its not a looped list; Question said its not.
    }
    cout << "Midpoint: " << tortoise->data << endl;
}

// void insertLast(int val)
// {
//     node *temp;
//     temp = new node();
//     temp->data = val;
//     temp->next = NULL;
//     if (root == NULL)
//     {
//         root = temp;
//     }
//     else
//     {
//         node *curr_node = root;
//         while (curr_node->next != NULL)
//         {
//             curr_node = curr_node->next;
//         }
//         curr_node = curr_node->next = temp;
//     }
// }

// int main()
// {
//     int node_no;
//     cout << "Insert node number: ";
//     cin >> node_no;
//     for (int i = 0; i < node_no; i++)
//     {
//         cout << "Insert Data no. " << i + 1 << ": ";
//         int dat;
//         cin >> dat;
//         insertLast(dat);
//     }
//     modifiedHandT();
// }
