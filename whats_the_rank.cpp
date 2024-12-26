#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

int main()
{
    typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    indexed_set s;
    
    while (n--)
    {
        int a;
        cin >> a;
        s.insert(a);
        
        cout << s.size() - s.order_of_key(a) << "\n";
    }
    
    return 0;
}