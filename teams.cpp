#include <bits/stdc++.h>
using namespace std;

int teams() 
{
    int n;
    int solved = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if ((a + b + c) >= 2)
            solved++;
    }
    
    cout << solved;
    
    return 0;
}