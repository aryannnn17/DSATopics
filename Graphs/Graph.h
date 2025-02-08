#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph_adj_matrix(int nodes, int edges)
{
    vector<vector<int>> mat(nodes + 1, vector<int>(nodes + 1));
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    return mat;
}

vector<vector<int>> graph_adj_list(int nodes)
{
    vector<vector<int>> adj(nodes);
    for (int i = 0; i < nodes; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}

vector<int> BFS(int n, vector<vector<int>> adj)
{
    vector<int> bfs;
    queue<int> q;
    vector<bool> visited(n, false);
    q.push(0);
    visited[0] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto &i : adj[node])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return bfs;
}

vector<int> DFS(int n, vector<vector<int>> adj)
{
    vector<int> dfs;
    stack<int> s;
    vector<bool> visited(n, false);
    s.push(0);
    visited[0] = true;
    while (!s.empty())
    {
        int node = s.top();
        s.pop();
        dfs.push_back(node);
        for (auto &i : adj[node])
        {
            if (!visited[i])
            {
                s.push(i);
                visited[i] = true;
            }
        }
    }
    return dfs;
}