#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n);
        
        for (auto& x : a) cin >> x;
        for (auto& x : b) cin >> x;
        
        vector<pair<int, int>> m;
        for (int i = 0; i < n; ++i)
        {
            m.emplace_back(a[i], 1);
            m.emplace_back(b[i], 2);
        }

        sort(m.begin(), m.end());
        
        int count = n, negative = 0;
        long long ans = 0;
        
        for (int i = 0; i < 2*n;)
        {
            auto [x, y] = m[i];
            
            if (negative <= k)
                ans = max(ans, 1LL * x * count);
            
            while (i < 2*n && m[i].first == x)
            {
                negative += (m[i].second == 1);
                negative -= (m[i].second == 2);
                count -= (m[i].second == 2);
                
                ++i;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}