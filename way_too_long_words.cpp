#include <bits/stdc++.h>
using namespace std;

int way_too_long_words() 
{
    int n;
    cin >> n;

    vector<string> words(n);

    string word;
    
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        words.push_back(word);
    }
    
    for (string i : words)
    {
        if (i.length() > 10)
            cout << i[0] + to_string(i.length() - 2) + i[i.length() - 1] << "\n";
        else
            cout << i << "\n";
    }
    
    return 0;
}