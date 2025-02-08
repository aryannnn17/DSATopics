#include "Graph.h"

int main()
{
    int nodes = 5, edges = 4;

    // adajacency matrix representation of the graph
   vector<vector<int>> mat = graph_adj_matrix(nodes, edges);
    for (int i = 0; i < mat.size(); ++i)
    {
        for (int j = 0; j < mat[i].size(); ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    // adajacency list representation of the graph
    vector<vector<int>> li = graph_adj_list(nodes);
    for (int i = 0; i < li.size(); ++i)
    {
        for (int j = 0; j < li[i].size(); ++j)
            cout << li[i][j] << " ";
        cout << endl;
    }

    //      0
    //     / \
    //    1   2
    //   / \   
    //  4   3

    // BFS traversal of the graph
    vector<int> bfs = BFS(nodes, li);
    cout << "BFS: ";
    for (int i = 0; i < bfs.size(); ++i)
        cout << bfs[i] << " ";

    cout << endl;

    // DFS traversal of the graph
    vector<int> dfs = DFS(nodes, li);
    cout << "DFS: ";
    for (int i = 0; i < dfs.size(); ++i)
        cout << dfs[i] << " ";

    return 0;
}
