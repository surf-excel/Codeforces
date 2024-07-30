#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
int hcf(int a, int h) {
    int temp;
    while (true) {
        temp = a % h;
        if (temp == 0) return h;
        a = h;
        h = temp;
    }
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n; cin>>n;
vi ara;
int x, k = 0;
for (int i = 0; i < n; ++i) {
cin >> x;
if (i == 0) {
ara.push_back(x);
continue;
}
if (hcf(ara.back(), x) != 1) {
ara.push_back(1);
ara.push_back(x);
k++;
} else ara.push_back(x);
}
cout << k << nline;
    for (int i = 0; i < ara.size(); ++i) {
        if (i == 0) cout << ara[i];
        else cout << " " << ara[i];
    }
    cout << nline;
    return 0;
}
