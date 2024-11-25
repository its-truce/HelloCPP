#include <bits/stdc++.h>
using namespace std;

int petya()
{
    string u, v;
    cin >> u >> v;

    transform(u.begin(), u.end(), u.begin(), ::tolower);
    transform(v.begin(), v.end(), v.begin(), ::tolower);

    if (u == v)
        cout << 0 << "\n";
    else if (u > v)
        cout << 1 << "\n";
    else
        cout << -1 << "\n";
    
    return 0;
}