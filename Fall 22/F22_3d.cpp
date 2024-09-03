#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void midNode()
{
    node *curr_node = root->next;
    node *mid_node = root;
    int count = 1;
    while(curr_node != 0)
    {
        curr_node = curr_node->next;
        count++;
    }
    int mid = count/2; // Can also be done with count = count/2;
    for(mid; mid > 0; mid--)
    {
        mid_node = mid_node->next;
    }
    cout << mid_node->data << endl;
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
    // insertFirst(6);
    insertFirst(5);
    insertFirst(4);
    insertFirst(3);
    insertFirst(2);
    insertFirst(1);
    printList();
    midNode();
}
*/