#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string x;
cin>>x;
int n=x.size();
vi a;
for (int i = 0; i < n; i++)
{
    if(x[i] !='+'){
    int p=x[i]-'0';
    a.push_back(p);
    }
}
sort(a.begin(),a.end());
for (int i = 0; i < a.size(); i++)
{
    cout<<a[i];
    if(i<= a.size() -2 && a.size()>1){
        cout<<"+";
    }
}
return 0;}