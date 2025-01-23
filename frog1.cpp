#include <bits/stdc++.h>

using namespace std;

int frog1()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];

    vector dp(n, INT_MAX);
    dp[0] = 0;
    
    for (int i = 0; i < n-1; ++i)
    {
        dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1]-h[i]));
        
        if (i+2 < n)
            dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2]-h[i]));
    }

    cout << dp.back() << "\n";
    
    return 0;
}
