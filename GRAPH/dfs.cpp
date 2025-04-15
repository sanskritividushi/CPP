// #include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class Solution {
  private: 
    void dfs(int node, vector<int> adj[], vector<int>&vis, vector<int> &ls) {
        vis[node] = 1; 
        ls.push_back(node); 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V); 
        int start = 0;
        vector<int> ls; 
        dfs(start, adj, vis, ls); 
        return ls; 
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main(){
    vector <int> adj[5];
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    Solution obj;
    vector <int> ans = obj.dfsOfGraph(5, adj);
    printAns(ans);
    return 0;
}

// using namespace std;
// template <typename T>
// class graph{
//     map<T, list<T>> l;
//     public:
//     void addEdge(int x, int y){
//         l[x].push_back(y);
//         l[y].push_back(x);
//     }

//     void dfstraversal(T src, map<T, bool> &visited){
//         cout << src << " ";
//         visited[src] = true;
//         //go to all neighbours of the node not viisted
//         for(T nbr: l[src]){
//             if(!visited[nbr]){
//                 dfstraversal(nbr, visited);
//             }
//         }
//     }
//     void dfs(T src){
//         map<T, bool> visited;
//         //make all noeds as not viisted int he starting 
//         for(auto p:l){
//             T node = p.first;
//             visited[node] = false;
//         }
//         //now call dfs traversal function to perform actual dfs
//         dfstraversal(src, visited);
//     }
// };

// int main(){
//     graph<int> g;
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(4, 5);
//     g.dfs(0);
//     return 0;
// }
