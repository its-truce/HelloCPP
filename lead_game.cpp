#include <bits/stdc++.h>
using namespace std;

int lead_game()
{
    int n;
    cin >> n;

    int best = 0;
    int total1 = 0, total2 = 0;
    
    while (n--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        
        total1 += p1;
        total2 += p2;
        
        int lead = total1 - total2;
        
        if (abs(lead) > abs(best))
            best = lead;
    }
    
    cout << (best > 0 ? 1 : 2) << " " << abs(best) << "\n";
    
    return 0;
}