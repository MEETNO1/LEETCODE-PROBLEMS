#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[100];
bool visited[100];

void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for( int neighbor:adj[node]){
        for(!visited[neighbor]){

            dfs(neighbor);
        }
    }

}
int main(){
    int n, m;
    cout << "Enter the number of nodes and edges:";
    cin >> n >> m;

    cout << "Enter the edges:\n";
    for( int i=0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "DFS Traversal:";
    dfs(0);

    return 0;

}