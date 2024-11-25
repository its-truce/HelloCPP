#include <bits/stdc++.h>
using namespace std;

int bitplusplus() {
    int n;
    int x = 0;
    
    cin >> n;

    string statement;
    for (int i = 0; i < n; ++i)
    {
        cin >> statement;

        if (statement[1] == '+')
            ++x;
        else
            --x;
    }
    
    cout << x;
    
    return 0;
}
