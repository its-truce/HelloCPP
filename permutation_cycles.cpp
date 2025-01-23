#include <bits/stdc++.h>

using namespace std;

int permutation_cycles()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_set<int> visited;
    vector<vector<int>> ans;
    int j = 0;

    while (visited.size() < n)
    {
        vector<int> cycle;
        
        while (!visited.count(a[j]))
        {
            visited.insert(a[j]);
            cycle.push_back(a[j]);
            j = a[j] - 1;
        }
        
        ans.push_back(cycle);

        for (int i = 0; i < n; ++i)
        {
            if (!visited.count(i + 1))
            {
                j = i;
                break;
            }
        }
    }

    cout << ans.size() << "\n";

    for (const auto& cycle : ans)
    {
        cout << cycle.back() << " ";

        for (const auto& elem : cycle)
            cout << elem << " ";
        
        cout << "\n";
    }

    return 0;
}
