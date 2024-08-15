#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
#define nline '\n'
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    cout<<((X>Y) ? A : B);
    
    return 0;
}
