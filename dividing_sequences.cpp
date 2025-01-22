#include <bits/stdc++.h>
using namespace std;

int dividing_sequences()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, ans = 0;
    cin >> n;
    
    vector<int> a(n), dp(n, 1);
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (a[j] % a[i] == 0)
                dp[i] = max(dp[j]+1, dp[i]);
        }
        
        ans = max(ans, dp[i]);
    }
    
    cout << ans << "\n";
    
    return 0;
}