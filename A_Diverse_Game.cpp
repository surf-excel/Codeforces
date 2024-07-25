#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--){
int sari=0, joker=0;
        cin >> sari >> joker;

        vector<vector<int>> dp(sari, vector<int>(joker));
        for (int i = 0; i < sari;i++)
            for (int j = 0; j < joker;j++)
                cin >> dp[i][j];
        bool just=false;
        if(sari == 1 && joker == 1){
            just =true;
        }
        if (just) {
            cout << -1 <<'\n';
            continue;
        }
        vector<int> x;
        for (int i = 0; i < sari;i++)
            for (int j = 0; j < joker;j++)
                x.push_back(dp[i][j]);
        vector<int> rx(x.size());
        for (int i = 0; i < x.size(); i++)
            rx[(i + 1) % x.size()] = x[i];
        vector<vector<int>> rmx(sari, vector<int>(joker));
        bool sol=false;
        for (int i = 0, k = 0; i < sari; i++)
            for (int j = 0; j < joker; j++, k++)
                rmx[i][j] = rx[k];
        for (int i = 0; i < sari; i++) {
            for (int j = 0; j < joker; j++) {
                cout << rmx[i][j] << " ";
            }
            cout << '\n';
        }

}
return 0;}
