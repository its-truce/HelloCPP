#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, m, k;
        string out;
        cin >> n >> m >> k;
        
        int lists[m];
        bitset<30001> known;
        
        for (int i = 0; i < m; ++i)
        {
            cin >> lists[i];
        }
        for (int i = 0; i < k; ++i)
        {
            int a;
            cin >> a;
            known[a] = true;
        }
        
        for (auto x : lists)
        {
            if (k != n - 1)
            {
                out.push_back((k < n - 1) ? '0' : '1');
                continue;
            }

            out.push_back(known[x] ? '0' : '1');
        }
        
        cout << out << "\n";
    }
    
    return 0;
}