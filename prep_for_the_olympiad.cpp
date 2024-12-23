#include <bits/stdc++.h>
using namespace std;

int prep_for_the_olympiad()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> m(n), s(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> m[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        int diff = 0;
        for (int i = 0; i < n-1; ++i)
        {
            if (m[i] > s[i+1])
                diff += (m[i] - s[i+1]);
        }
        diff += m[n-1];
        
        cout << diff << "\n";
    }
    
    return 0;
}