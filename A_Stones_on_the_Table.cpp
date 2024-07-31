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
int n,flag=0; cin>>n;
string s; cin>>s;
for (int i = 0; i < n-1; i++)
{
    if(s[i]==s[i+1]) flag++;
}
cout<<flag<<nline;
return 0;}