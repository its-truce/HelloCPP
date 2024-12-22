#include <bits/stdc++.h>
using namespace std;

int voters_list()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    int total = n1 + n2 + n3;
    
    map<int, int> m;
    set<int> final;
    
    while (total--)
    {
        int a;
        cin >> a;
        
        m[a]++;
    }
    
    for (auto x : m)
    {
        if (x.second > 1)
            final.insert(x.first);
    }
    
    cout << final.size() << "\n";
    for (auto x : final)
    {
        cout << x << "\n";
    }
    
    return 0;
}