#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl

struct node // Nodes of thee tree
{
    int data;
    node *left;
    node *right;
};

node *root = NULL;


int occur(node *r, int val) // Using *r as a means of setting new search every recursion
{
    int count = 0;
    while (r != NULL) // Until we find root
    {
        if (r->data == val) // If found
        {
            count++;
            while (r->data != val)
            {
                r = r->left; // Based on BSTInsert, equal values will always be on the left subtree
                count++;
            }
            return (count + occur(r->right, val)); // Recursion to find the value if its not inserted immediately
        }
        if (r->data < val)
        {
            r = r->right;
        }
        else
        {
            r = r->left;
        }
    }
    return count; // If not found in the tree; if the value doesnt exist in the tree it will return 0
}

// void BSTprint(node *temp) // In-Order printing of the BST
// {
//     if (temp != NULL)
//     {
//         BSTprint(temp->left);
//         cout << temp->data << " ";
//         BSTprint(temp->right);
//     }
// }

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
//     BSTprint(root);                                     // To verify if BST was made successfully
//     paragraph;
//     paragraph;

//     int find;
//     cout << "Element you would like to find: ";
//     cin >> find;
//     int count = occur(root, find);
//     cout << count << endl;
// }
