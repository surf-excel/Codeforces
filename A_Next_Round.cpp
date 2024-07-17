#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k,flag=0;
cin>>n>>k;
int a[n];
read(a);
for (int i = 0; i < n; i++)
{
if(a[i]>=a[k-1] && a[i]>0){
flag++;
}
}
cout<<flag;
return 0;}
