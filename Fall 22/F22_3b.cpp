#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void rotation(int K)
{
    node *curr_node = root->next;
    node *prev_node = root;
    for (K; K > 0; K--)
    {
        while (curr_node->next != NULL)
        {
            prev_node = curr_node;
            curr_node = curr_node->next;
        }
        curr_node->next = root;
        prev_node->next = NULL;
        root = curr_node;
    }

    while (curr_node->next != NULL)
    {
        cout << curr_node->data << " -> ";
        curr_node = curr_node->next;
    }
    cout << curr_node->data;
}


/*
void insertFirst(int val) // Inserts value at the start of the list; Prints in the reverse order of insertion
{
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root == NULL) // Called only once to set the root first
    {
        root = temp;
    }
    else
    {
        temp->next = root;
        root = temp;
    }
}

void printList() // Function to print the linked list
{
    node *curr_node = root;
   while (curr_node->next != NULL)
    {
        cout << curr_node->data << " -> ";
        curr_node = curr_node->next;
    }
    cout << curr_node->data;
    cout << endl;
}


int main()
{
    insertFirst(5);
    insertFirst(4);
    insertFirst(3);
    insertFirst(2);
    insertFirst(1);
    printList();
    rotation(2);
}
 */