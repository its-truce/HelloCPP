#include <bits/stdc++.h>
using namespace std;

int zero_one_tiles()
{
    // first dp problem!
    int n;
    cin >> n;
    
    int ans[n+1];
    ans[0] = 1, ans[1] = 1;

    for (int i = 2; i < n+1; ++i)
    {
        ans[i] = (ans[i-1] + ans[i-2]) % 15746;
    }
    
    cout << ans[n] << "\n";
    
    return 0;
}