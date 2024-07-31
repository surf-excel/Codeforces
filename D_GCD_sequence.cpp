#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define nline '\n'

const int N = 2e5 + 5;
int n;
int a[N], b[N], c[N];

// Function to check if removing the element at position x results in a valid sequence
bool check(int x) {
    int t = 0;

    for (int i = 1; i <= n; i++) {
        if (i == x) continue;
        c[++t] = a[i];
    }

    int last = 1;
    for (int i = 1; i < n - 1; i++) {
        int y = __gcd(c[i], c[i + 1]);
        if (last > y) return false;
        last = y;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        cin >> n;
        read(a + 1); // Read array `a`, 1-based index
        
        // Compute GCD of adjacent elements in array `a` and store in array `b`
        for (int i = 1; i < n; i++) {
            b[i] = __gcd(a[i], a[i + 1]);
        }

        int x = -1; 
        for (int i = 1; i < n - 1; i++) {
            if (b[i] > b[i + 1]) {
                x = i;
                break;
            }
        }

        if (x == -1) {
            cout << "YES" << nline;
        } else if (check(x) || check(x + 1) || check(x + 2)) {
            cout << "YES" << nline;
        } else {
            cout << "NO" << nline;
        }
    }

    return 0;
}
