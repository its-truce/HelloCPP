#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long calc(const vector<int>& a, const vector<int>& b) 
{
    long long total = 0;
    
    for (size_t i = 0; i < a.size(); ++i) 
    {
        total += 1LL * a[i] * b[i];
    }
    return total;
}

int vegetables() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    while (q--)
    {
        int upgrades;
        cin >> upgrades;

        vector<int> current_a = a;
        vector<int> current_b = b;

        for(int upgrade = 0; upgrade < upgrades; upgrade++) {
            int best_index = -1;
            double max_reduction = 0.0;

            //check A upgrades first
            for(int i = 0; i < n; i++) {
                if(current_a[i] > 0) {
                    auto reduction = (double)current_b[i];
                    if (reduction > max_reduction) {
                        max_reduction = reduction;
                        best_index = i;
                    }
                }
            }

            //then check B upgrades
            for(int i = 0; i < n; i++) {
                if (current_b[i] > 0) {
                    auto reduction = (double)current_a[i];
                    if (reduction > max_reduction) {
                        max_reduction = reduction;
                        best_index = -i - 1;
                    }
                }
            }

            if (best_index >= 0) {
                current_a[best_index]--;
            } else
            {
                current_b[-best_index - 1]--;
            }

        }
        
        cout << calc(current_a, current_b) << "\n";
    }

    return 0;
}