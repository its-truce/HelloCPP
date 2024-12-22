#include <bits/stdc++.h>
using namespace std;

int reverse_punctuation()
{
    int n;
    cin >> n;
    
    vector<string> v;
    string in;
    
    while (cin >> in)
        v.push_back(in);
    
    reverse(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); ++i)
    {
        auto s = v[i];
        
        for (auto c : s)
        {
            if (c == '\'' || c == '.' || c == ',' || c == ';' || c == ':')
                continue;
            else
                cout << c;
        }
        
        cout << (i > 0 && s.find('.') != variant_npos ? "\n" : " ");
    }
    
    return 0;
}