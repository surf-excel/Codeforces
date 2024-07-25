#include <bits/stdc++.h>
#define int long long int
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, min_value; // Renamed min to min_value to avoid conflict
        cin >> n >> min_value;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        int max_elements = 0, total = 0;

        for (int i = 0; i < n; i++) {
            total += v[i];
            if (total >= min_value * (i + 1)) {
                max_elements = i + 1; // Update max_elements
            }
        }
        cout << max_elements << endl;
    }

    return 0;
}
