#include <bits/stdc++.h>
using namespace std;

int listofbooks()
{
    int n, m;
    cin >> m;
    
    vector<int> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }
    
    cin >> n;
    
    vector<int> books;
    for (int i = 0; i < n; ++i)
    {
        int pos;
        cin >> pos;
        
        books.push_back(v[pos - 1]);
        v.erase(v.begin() + pos - 1);
    }
    
    for (int x : books)
    {
        cout << x << "\n";
    }
    
    return 0;
}