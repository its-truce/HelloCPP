#include <bits/stdc++.h>
using namespace std;

vector<int> generateSums(const vector<int>& nums) 
{
    int n = (int)nums.size();
    int totalSubsets = 1 << n;
    vector<int> subsetSums;

    for (int i = 0; i < totalSubsets; ++i) 
    {
        int sum = 0;
        
        for (int j = 0; j < n; ++j) 
        {
            if (i & (1 << j))
                sum += nums[j];
        }
        
        subsetSums.push_back(sum);
    }
    
    return subsetSums;
}

int meet_in_the_middle()
{
    int n, x;
    cin >> n >> x;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    vector<int> sub1, sub2;
    vector<int> sums1, sums2;
    
    for (int i = 0; i < n/2; ++i)
    {
        sub1.push_back(v[i]);
    }
    for (int i = n/2; i < n; ++i)
    {
        sub2.push_back(v[i]);
    }
    
    sums1 = generateSums(sub1);
    sums2 = generateSums(sub2);
    
    for (auto i : sums1)
    {
        for (auto j : sums2)
        {
            if (i + j == x)
            {
                cout << "true" << "\n";
                return 0;
            }
        }   
    }
    cout << "false" << "\n";
    
    return 0;
}