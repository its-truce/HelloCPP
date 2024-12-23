#include <bits/stdc++.h>
using namespace std;

int next_permutation()
{
    int n, k;
    cin >> n >> k;
    
    while (k--)
    {
        vector<int> permutation(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> permutation[i];
        }
        
        next_permutation(permutation.begin(), permutation.end());
        for (auto x : permutation)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}