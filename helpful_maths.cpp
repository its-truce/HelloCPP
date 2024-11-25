#include <bits/stdc++.h>
using namespace std;

int helpful_maths()
{
    string s;
    cin >> s;
    
    int num1(0), num2(0), num3 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
            continue;

        if (s[i] == '1')
            num1++;
        else if (s[i] == '2')
            num2++;
        else
            num3++;
    }

    string ans;
    
    for (int i = 0; i < num1; ++i)
    {
        ans += "1+";    
    }
    
    for (int i = 0; i < num2; ++i)
    {
        ans += "2+";
    }
    
    for (int i = 0; i < num3; ++i)
    {
        ans += "3+";
    }
    
    ans.pop_back();
    cout << ans << "\n";
    
    return 0;   
}