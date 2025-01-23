#include <bits/stdc++.h>

using namespace std;

int number_of_tilings()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> dp(n+1);
    dp[0] = 1; dp[1] = 1; dp[2] = 2; dp[3] = 5;

    for (int i = 5; i < n+1; ++i)
    {
        dp[i] = (2*dp[i-1] + dp[i-3]) % 10000;
    }

    cout << dp.back() % 10000 << "\n";

    return 0;
}
