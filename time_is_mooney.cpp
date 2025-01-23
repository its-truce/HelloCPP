#include <bits/stdc++.h>

using namespace std;

constexpr int MAX_DAYS = 1000;

int time_is_mooney()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c;
    cin >> n >> m >> c;

    vector<int> moo(n);
    for (int i = 0; i < n; ++i) cin >> moo[i];

    vector<vector<int>> adj(n), dp(MAX_DAYS, vector<int>(n, -1));
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        
        a--; b--;
        adj[a].push_back(b);
    }

    dp[0][0] = 0;

    return 0;
}