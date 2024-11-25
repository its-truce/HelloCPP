#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int best = 0;
    
    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            count++;
            best = max(best, count);
            count = 0;            
        }
    }
    
    cout << (best >= 7 ? "YES" : "NO") << "\n";
    
    return 0;
}   