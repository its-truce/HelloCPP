#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> m;

        while (n--)
        {
            int a;
            cin >> a;

            m[a]++;
        }

        int sum = 0;
        for (auto x : m)
        {
            sum += x.second / 2;
        }

        cout << sum << "\n";
    }
    
    return 0;
}