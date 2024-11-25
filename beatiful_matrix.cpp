#include <bits/stdc++.h>
using namespace std;

int beautiful_matrix()
{
    int i = 0, j = 0;
    int val = 0;

    for (int n = 0; n < 25; n++)
    {
        cin >> val;

        if (val == 1)
        {
            i = (n / 5) + 1;
            j = (n % 5) + 1;
            
            break;
        }
    }
    
    cout << abs(3 - i) + abs(3 - j);

    return 0;
}
