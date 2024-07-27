#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
float disscount_percentage; cin>>disscount_percentage;
float old_price=0.00,new_price=0.00; cin>>new_price;
old_price=(new_price/(100.00-disscount_percentage))*100;
cout<<fixed<<setprecision(2)<<old_price<<endl;
return 0;}