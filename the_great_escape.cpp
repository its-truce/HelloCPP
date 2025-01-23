#include <bits/stdc++.h>

using namespace std;

int bfs(const int start, const int target, vector<vector<int>>& adjList, const int n)
{
    vector distance(n, -1); 
    distance[start] = 0; 

    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        const int current = q.front();
        q.pop();
        
        if (current == target)
            return distance[current];

        for (int neighbor : adjList[current])
        {
            if (distance[neighbor] == -1)
            {
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);
            }
        }
    }

    return 0;
}

int the_great_escape()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, s, t;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; ++i) adj.emplace_back();

    while (m--)
    {
        int i, j;
        cin >> i >> j;

        adj[i-1].push_back(j-1);
        adj[j-1].push_back(i-1);
    }
    cin >> s >> t;
    s--; t--;

    cout << bfs(s, t, adj, n) << "\n";
    
    return 0;
}
