#include <bits/stdc++.h>
using namespace std;

int end_of_corruption()
{
    int n, m;
    cin >> n >> m;
    int steps = n + m;
    
    set<int> s;
    vector<int> corrupt;
    
    while (steps--)
    {
        int a;
        cin >> a;
        
        if (a > 0)
            s.insert(a);
        else
        {
            auto iter = s.end();
            iter--;
            corrupt.push_back(*iter);
            s.erase(*iter);
        }
    }
    
    for (auto x : corrupt)
    {
        cout << x << "\n";
    }
    
    return 0;
}