// #include <bits/stdc++.h>
// using namespace std;
// //bfs
// class Graph
// {
//     int V;                   // number of vertices
//     vector<vector<int>> adj; // adjacency list

// public:
//     Graph(int V)
//     {
//         this->V = V;
//         adj.resize(V);
//     }

//     // add edge (undirected graph ke liye dono taraf)
//     void addEdge(int u, int v)
//     {
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // BFS traversal
//     void BFS(int start)
//     {
//         vector<bool> visited(V, false);
//         queue<int> q;

//         // start node
//         visited[start] = true;
//         q.push(start);

//         cout << "BFS Traversal starting from node " << start << ": ";

//         while (!q.empty())
//         {
//             int node = q.front();
//             q.pop();
//             cout << node << " ";

//             // saare neighbours check karo
//             for (int neigh : adj[node])
//             {
//                 if (!visited[neigh])
//                 {
//                     visited[neigh] = true;
//                     q.push(neigh);
//                 }
//             }
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     Graph g(6); // 6 vertices: 0 to 5

//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 3);
//     g.addEdge(1, 4);
//     g.addEdge(2, 5);

//     g.BFS(0); // start BFS from node 0
//     return 0;
// }

