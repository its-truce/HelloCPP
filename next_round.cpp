#include <bits/stdc++.h>
using namespace std;

int next_round()
{
    int n, k;
    cin >> n >> k;
    
    int threshold, qualifiers = 0, score;

    for (int i = 1; i <= n; ++i)
    {
        cin >> score;

        if (i == k)
            threshold = score;
        
        if (score > 0 && (i <= k || score >= threshold))
            qualifiers++;
    }
    
    cout << qualifiers;
    
    return 0;
}