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
int day,point,lesson,lab;
cin>>day>>point>>lesson>>lab;
int total_lab =(day+6)/7;
int low=1, high=day;
int ans =1e9;
while(low<=high){
int mid= (high+low)/2;
int get= mid* lesson+ lab* min(2*mid, total_lab);
if(point <= get) {
ans = mid;
high= mid-1;
}
else low = mid+1;
}
cout <<day - ans<<nline;
}
return 0;}