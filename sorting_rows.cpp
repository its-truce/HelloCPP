#include <bits/stdc++.h>
using namespace std;

bool comp(const vector<int>& a, const vector<int>& b)
{
    int n = (int)min(a.size(), b.size());
    
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == b[i])
            continue;
        else
            return a[i] < b[i];
    }
    
    return a.size() < b.size();
}

int sorting_rows()
{
    int n;
    cin >> n;
    
    vector<vector<int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        vector<int> ln;
        int x;
        
        while (cin >> x && x != -1) 
        { 
            ln.push_back(x);
        }
        
        v[i] = ln;
    }
    
    sort(v.begin(), v.end(), comp);

    for (const auto& x : v)
    {
        for (auto y : x)
            cout << y << " ";

        cout << "\n";
    }
    
    return 0;
}