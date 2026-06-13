#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[100];
bool visited [100];

void bfs(int start)
{
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while( !queue.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int neighbor: adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push[neighbor];
            }
        }
    }

}
int main(){
    int  n , m;
    cout <<" Enter the number of nodes and edges:";
    cin >> n >> m;

    cout << "Enter edges:\n";
    for( int i =0; i < m; i++){
        int u , v;
      cin >> u >> v;
        adj[u].push_back[v];
        adj[v].push_back[u];

    }
    cout << " BFS traversal:";
    bfs(0);

    return 0;

}