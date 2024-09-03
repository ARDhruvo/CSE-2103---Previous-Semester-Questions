#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root1 = NULL;
node *root2 = NULL;
node *root = NULL;

void insertFirst(int val) // Inserts value at the start of the list; Prints in the reverse order of insertion
{
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root == NULL) // Called only once to set the root first
    {        root = temp;
    }
    else
    {
        temp->next = root;
        root = temp;
    }
}

void nodeSum()
{
    int sum1 = 0, sum2 = 0, sum;
    sum1 = root1->data;
    sum2 = root2->data;
    while (root1->next != NULL)
    {
        root1 = root1->next;
        sum1 = (sum1 * 10) + root1->data;
    }
    while (root2->next != NULL)
    {
        root2 = root2->next;
        sum2 = (sum2 * 10) + root2->data;
    }
    sum = sum1 + sum2;
    while(sum != 0)
    {
        cout << sum << endl;
        insertFirst(sum%10);
        sum /= 10;
    }

    node *curr_node = root;
    while (curr_node->next != NULL)
    {
        cout << curr_node->data << " -> ";
        curr_node = curr_node->next;
    }
    cout << curr_node->data;
    cout << endl;
}

/*
void listMaker(int val, node *&r) // Inserts value at the start of the list; Prints in the reverse order of insertion
{
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (r == NULL) // Called only once to set the root first
    {
        r = temp;
    }
    else
    {
        temp->next = r;
        r = temp;
    }
}

void printList(node *&r) // Function to print the linked list
{
    node *curr_node = r;
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
    // listMaker(2, root1);
    // listMaker(4, root1);
    // listMaker(3, root1);
    // listMaker(5, root2);
    // listMaker(6, root2);
    // listMaker(4, root2);
    listMaker(3, root1);
    listMaker(6, root1);
    listMaker(5, root1);
    listMaker(2, root2);
    listMaker(4, root2);
    listMaker(8, root2);
    printList(root1);
    printList(root2);
    nodeSum();
}
 */