#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int s = arr[0];
    for (int i = 1; i < n; ++i) {
        s= min(s,arr[i]);
    }
    int m = n;
    int p = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == s) {
            if (p != -1) {
                m = min(m, i - p);
            }
            p = i;
        }
    }
    cout << m << '\n';

    return 0;
}
