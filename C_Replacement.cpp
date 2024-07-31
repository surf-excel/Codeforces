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
int n; cin>>n;
vi a(n);
vi visited(n,0); read(a);
for (int i = 0; i < n; i++)
{   if(a[i]>0) visited[i]=1;
    else if(a[i]<0) visited[i] =2;
    else visited[i]=0;
}
for (int i = 0; i < n; i++)
{
    cout<<visited[i]<<" ";
}
return 0;}