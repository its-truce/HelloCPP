#include <bits/stdc++.h>
using namespace std;

int prep_for_the_exam()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        string out;
        cin >> n >> m >> k;

        vector<int> lists(m);
        set<int> known;

        for (int i = 0; i < m; ++i)
        {
            cin >> lists[i];
        }

        for (int i = 0; i < k; ++i)
        {
            int a;
            cin >> a;
            known.insert(a);
        }

        for (auto x : lists)
        {
            if (k != n - 1)
            {
                out.push_back((k < n - 1) ? '0' : '1');
                continue;
            }

            out.push_back(known.count(x) ? '0' : '1');
        }

        cout << out << "\n";
    }

    return 0;
}
