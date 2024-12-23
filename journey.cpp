#include <bits/stdc++.h>
using namespace std;

int journey()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, v[3];
        cin >> n >> v[0] >> v[1] >> v[2];

        int total = v[0] + v[1] + v[2];
        int cycles = n / total; 
        int r = n % total; 

        int day = cycles * 3;
        for (int i = 0; i < 3 && r > 0; ++i)
        {
            r -= v[i];
            day++;
        }
        
        cout << day << "\n";
    }
    
    return 0;
}