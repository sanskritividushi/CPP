#include <iostream>
#include <map>
#include <list>
#include <queue>
// using namespace std;

// template <typename T>
// class graph{
//     map<T, list<T>> l;
//     public:
//     void addEdge(int x, int y){
//         l[x].push_back(y);
//         l[y].push_back(x);
//     }
// // 
//     void bfs(T src){
//         //make a map of type bool to keep count of visited
//         map<T, int> visited;
//         queue<T> q;
//         q.push(src);
//         visited[src] = true;

//         while(!q.empty()){
//             T node = q.front();
//             q.pop();
//             cout << node << " ";
//             for(int nbr:l[node]){
//                 if(!visited[nbr]){
//                     q.push(nbr);
//                     //mark nbr as visited
//                     visited[nbr] = true;
//                 }
//             }
//         }
//     }
// };

// int main(){
//     graph<int> g;
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(4, 5);
//     g.bfs(0);
//     return 0;
// }

// #include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V);
        vis[0] = 1;
        queue<int> q;
        q.push(0); 
        vector<int> bfs; 
        while(!q.empty()) {
            int node = q.front(); 
            q.pop(); 
            bfs.push_back(node); 
            for(auto it : adj[node]) {
                if(!vis[it]) {
                    vis[it] = 1; 
                    q.push(it); 
                }
            }
        }
        return bfs; 
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
    vector <int> adj[6];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);
    for(auto it:adj){
        for(auto i:it){
            cout << i << " ";
        }
        cout << endl;
    }
    Solution obj;
    vector <int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}