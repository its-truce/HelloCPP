#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> inputs;
    
    for (int i = 0; i < t; ++i)
    {
        int k;
        cin >> k;

        vector<int> v(k);
        for (int j = 0; j < k; ++j)
        {
            cin >> v[j];
        }
        
        inputs.push_back(v);
    }

    for (const vector<int>& v : inputs)
    {
        int req = (int)v.size() - 2;
        bool found = false;

        for (int i = 0; i < v.size() && !found; ++i)
        {
            for (int j = i + 1; j < v.size(); ++j)
            {
                if (v[i] * v[j] == req)
                {
                    cout << v[i] << " " << v[j] << "\n";
                    found = true;
                    break;
                }
            }
        }
    }
    
    return 0;
}