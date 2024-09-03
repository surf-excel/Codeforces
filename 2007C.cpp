#include <bits/stdc++.h>
using namespace std;

// Function to compute gcd of two numbers
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a, b;
        cin >> n >> a >> b;

        vector<long long> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        long long min_c = *min_element(c.begin(), c.end());
        long long max_c = *max_element(c.begin(), c.end());
        
        long long range = max_c - min_c;
        long long gcd_ab = gcd(a, b);
        
        cout << range % gcd_ab << '\n';
    }

    return 0;
}
