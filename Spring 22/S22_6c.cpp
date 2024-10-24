#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    char name;
    node *next;
};

node *root = NULL;

void revList(node *root, stack<int> s)
{
    while (root != NULL)
    {
        s.push(root->data);
        root = root->next;
    }
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

// int main()
// {
//     node *A, *B, *C, *D, *E, *F, *G;
//     A = new node();
//     B = new node();
//     C = new node();
//     D = new node();
//     E = new node();
//     F = new node();
//     G = new node();

//     A->next = B;
//     B->next = C;
//     C->next = D;
//     D->next = E;
//     E->next = F;
//     F->next = G;
//     G->next = NULL;

//     srand(time(0));

//     root = A;
//     node *curr = root;
//     int naming = 0;
//     while (curr != NULL)
//     {
//         curr->name = 'A' + naming;
//         curr = curr->next;
//         naming++;
//     }

//     curr = root;

//     while (curr != NULL)
//     {
//         curr->data = rand() % 69;
//         cout << curr->name << " = " << curr->data << endl;
//         curr = curr->next;
//     }

//     stack<int> s;
//     revList(root, s);
// }
