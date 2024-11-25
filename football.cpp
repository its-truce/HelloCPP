#include <bits/stdc++.h>
using namespace std;

int football()
{
    string s;
    cin >> s;
    int count = 1, best = 1;
    
    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == s[i + 1])
            count++;
        else
            count = 1;
        
        best = max(best, count);
    }
    
    cout << (best >= 7 ? "YES" : "NO") << "\n";
    
    return 0;
}   