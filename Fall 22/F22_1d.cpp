#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl
#define WHITE -1
#define GRAY 0
#define BLACK 1

vector<int> Node_Vec[100];
int color[12];

// Asked for algorithm so the code isn't important

void DFS(int src)
{
    color[src] = GRAY;
    for (int i = 0; i < Node_Vec[src].size(); i++)
    {
        int v = Node_Vec[src][i];
        if (color[v] == WHITE)
        {
            DFS(Node_Vec[src][i]);
        }
    }
    color[src] = BLACK;
}

// int main()
// {
//     int node_no, edge_no;
//     cout << "Enter the number of nodes: ";
//     cin >> node_no;
//     cout << "Enter the number of edges: ";
//     cin >> edge_no;
//     cout << "Enter connections:" << endl;
//     for (int i = 1; i <= edge_no; i++)
//     {
//         int nodeA, nodeB;
//         scanf("%d %d", &nodeA, &nodeB);
//         Node_Vec[nodeA].push_back(nodeB);
//         Node_Vec[nodeB].push_back(nodeA); // for undirected graph
//     }
//     paragraph;

//     cout << "Adjacency List:" << endl;
//     for (int i = 1; i <= node_no; i++)
//     {
//         cout << i << " -> ";
//         for (int j = 0; j < Node_Vec[i].size(); j++)
//         {
//             cout << Node_Vec[i][j] << " ";
//         }
//         paragraph;
//     }
//     for (int i = 0; i < 12; i++)
//     {
//         color[i] = WHITE;
//     }
//     int src;
//     cout << "Enter Source of DFS: ";
//     cin >> src;
//     DFS(src);
// }
