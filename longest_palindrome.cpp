#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string& w)
{
    int left = 0, right = (int)w.length() - 1;
    
    while (left < right)
    {
        if (w[left] != w[right])
            return false;
        
        left++;
        right--;
    }
    
    return true;
}

int longest_palindrome()
{
    int len;
    string word;
    
    cin >> len;
    cin >> word;
    
    int best_len = 0;
    string best_seq;
    
    for (int i = 0; i < len; ++i)
    {
        string sub;
        
        for (int j = i; j < len; ++j)
        {
            sub = word.substr(i, j - i + 1);
            
            if (sub.length() > best_len && is_palindrome(sub))
            {
                best_len = (int)sub.length();
                best_seq = sub;
            }
        }
    }
    
    cout << best_len << "\n" << best_seq << "\n";
    
    return 0;
}