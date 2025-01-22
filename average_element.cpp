#include <bits/stdc++.h>
using namespace std;

int average_element()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    cin >> n;
    
    vector<int> a(n);
    unordered_map<int, int> freq_map;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        freq_map[a[i]]++;
    }
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            int sum = a[i] + a[j];
            
            if (sum % 2 == 0)
            {
                int average = sum / 2;
                
                if (freq_map.count(average))
                {
                    count += freq_map[average];
                    freq_map[average] = 0;                   
                }
            }
        }
    }
    
    cout << count << "\n";
    
    return 0;
}