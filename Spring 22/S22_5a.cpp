#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important

struct node
{
    int data;
    char name;
    node *next;
};

node *root = NULL;

void cycleIdentification(node *start)
{
    node *hare = start; // Let both initialize from start
    node *tort = start;
    hare = hare->next;
    while ((hare != NULL) && (hare->next != NULL)) // Until the hare runs into a dead end
    {
        hare = hare->next->next; // Hare will always move (n*tortoise) speed
        tort = tort->next;
        if (hare == tort) // If they meet there is a loop
        {
            cout << "Loop found" << endl;
            return;
        }
    }
    cout << "No loop" << endl; // This will be when loop breaks i.e. the hare has reached the end of the line
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

//     cycleIdentification(root);

//     curr = root;
//     int i = rand() % 4;
//     char name = 'A' + i;
//     cout << "Loop starts at " << name << endl;
//     for (int j = 0; j < i; j++)
//     {
//         curr = curr->next;
//     }
//     G->next = curr;

//     cycleIdentification(root);
// }
