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
string s; cin>>s; int count=0; int n=s.size();
sort(s.begin(),s.end());
for (int i = 0; i < n; i++)
{
    if (i == 0 || s[i] != s[i - 1]) count++;
}
if(count%2 ==0) cout<<"CHAT WITH HER!"<<nline;
else cout<<"IGNORE HIM!"<<nline;
return 0;}