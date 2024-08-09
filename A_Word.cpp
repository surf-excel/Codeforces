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
string s; cin>>s; int up=0,low=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]>='A' && s[i]<='Z') up++;
    else low++;
}
if(up>low)  transform(s.begin(), s.end(), s.begin(), ::toupper);
else transform(s.begin(), s.end(), s.begin(), ::tolower);
cout<<s<<nline;
return 0;}