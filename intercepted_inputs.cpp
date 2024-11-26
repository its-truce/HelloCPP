#include <bits/stdc++.h>
using namespace std;

int intercepted_inputs()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        map<int, int> m;

        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;

            m[a]++;
        }

        int req = k - 2;

        for (int i = 1; i * i <= req; i++)
        {
            int q = req / i;

            if (q * i == req && m.find(i) != m.end() && m.find(q) != m.end())
            {
                cout << i << " " << q << "\n";
                break;
            }
        }
    }

    return 0;
}
