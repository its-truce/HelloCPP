#include <bits/stdc++.h>

using namespace std;

int wordlist()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    set<string> words;
    string word;

    while (cin >> word)
    {
        string clean;
        
        for (const auto c : word)
        {
            if(isalpha(c))
                clean += static_cast<char>(tolower(c));
        }
        
        if (!clean.empty())
            words.insert(clean);
    }
    
    cout << words.size() << "\n";
    
    for (const auto& w : words)
    {
        cout << w << "\n";
    }
    
    return 0;
}