#include <bits/stdc++.h>
using namespace std;

// Asked for algorithm so the code isn't important

vector<int> wrestlers[100];
int type[10];

bool rivalry(int src) // Basic BFS just to check if Bipartite
{
    queue<int> Q;
    type[src] = 0;
    Q.push(src);
    while (!Q.empty())
    {
        int babyfaces = Q.front();
        Q.pop();
        for(int i = 0; i < wrestlers[babyfaces].size(); i++)
        {
            int heels = wrestlers[babyfaces][i];
            if(type[heels] == -1)
            {
                type[heels] = type[babyfaces] + 1;
                Q.push(heels);
            }
            else if(type[heels] == type[babyfaces]) // To check if bipartite
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
//         wrestlers[nodeA].push_back(nodeB);
//         wrestlers[nodeB].push_back(nodeA); // for undirected graph
//     }
//     paragraph;

//     // Print Node Adjacency List by traversing the list
//     cout << "Adjacency List:" << endl;
//     for (int i = 1; i <= node_no; i++)
//     {
//         cout << i << " -> ";
//         for (int j = 0; j < wrestlers[i].size(); j++)
//         {
//             cout << wrestlers[i][j] << " ";
//         }
//         paragraph;
//     }

//     for (int i = 0; i <= node_no; i++)
//     {
//         type[i] = -1;
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