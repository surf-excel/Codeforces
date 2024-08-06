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
int t=1;
cin>>t;
while(t--){
int n; cin >> n;
int winner = 0, pos = 0;
for (int i = 0; i < n; i++)
{
        int m, q;
        cin >> m >> q;

        if (m <= 10)
        {
            if (q > winner)
            {
                winner = q;
                pos = i + 1;
            }
        }
    }

    cout << pos << nline;

}
return 0;}