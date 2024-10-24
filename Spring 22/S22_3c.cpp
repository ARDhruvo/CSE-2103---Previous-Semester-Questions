#include <bits/stdc++.h>
using namespace std;

vector<int> Node_Vec[100];
int level[10];

bool bicolorable(int src)
{
    queue<int> Q;
    level[src] = 0;
    Q.push(src);
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for (int i = 0; i < Node_Vec[u].size(); i++)
        {
            int v = Node_Vec[u][i];
            if (level[v] == -1)
            {
                level[v] = level[u] + 1;
                Q.push(v);
            }
            else if (level[v] == level[u])
            {
                return false;
            }
        }
    }
    return true;
}

// #define paragraph cout << endl

// int main()
// {
//     int node_no, edge_no, src, dst;
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

//     // Print Node Adjacency List by traversing the list
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

//     for (int i = 0; i <= node_no; i++)
//     {
//         level[i] = -1;
//     }
//     paragraph;
//     cout << "Enter source: ";
//     cin >> src;
//     if(rivalry(src))
//     {
//         cout << "Bipartite" << endl;
//     }
//     else{
//         cout << "Not Bipartite" << endl;
//     }
// }