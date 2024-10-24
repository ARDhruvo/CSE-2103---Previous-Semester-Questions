#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl


// Asked for algorithm so the code isn't important

struct node // Nodes of thee tree
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void preOrder(node *temp)
{
    if(temp != NULL)
    {
        cout << temp-> data << " ";
        preOrder(temp->left);
        preOrder(temp->right);
    }
}

void postOrder(node *temp)
{
    if(temp != NULL)
    {
        postOrder(temp->left);
        postOrder(temp->right);
        cout << temp-> data << " ";
    }
}

// void BSTinsert(int val) // Inserts a value in the tree
// {
//     node *temp;
//     temp = new node();
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL; // Temp node for value insertion

//     if (root == NULL) // For no data in the tree
//     {
//         root = temp;
//     }

//     else // For new data
//     {
//         node *curr_node = root;
//         node *prev_node = root;
//         while (curr_node != NULL) // Traversing to find the appropriate location
//         {
//             prev_node = curr_node;
//             if (curr_node->data > val)
//             {
//                 curr_node = curr_node->left;
//             }
//             else
//             {
//                 curr_node = curr_node->right;
//             }
//         }

//         if (prev_node->data > val) // Inserting in the appropriate location
//         {
//             prev_node->left = temp;
//         }
//         else
//         {
//             prev_node->right = temp;
//         }
//     }
// }

// int main()
// {
//     int node_no, val;

//     cout << "Enter Number of Nodes: ";
//     cin >> node_no;
//     for (int i = 0; i < node_no; i++)
//     {
//         cout << "Enter Node no. " << i + 1 << ": ";
//         cin >> val;
//         BSTinsert(val);
//     }
//     paragraph;

//     cout << "In-order traversal of the tree: " << endl; // In-order printing of BST gives ascending value
//     inOrder(root);                                     // To verify if BST was made successfully
//     paragraph;
//     paragraph;

//     cout << "Post-order traversal of the tree: " << endl; // In-order printing of BST gives ascending value
//     postOrder(root);                                     // To verify if BST was made successfully
//     paragraph;
//     paragraph;
// }
