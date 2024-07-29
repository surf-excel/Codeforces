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
int n; cin>>n;
string s; cin >> s;
vi freq(26, 0);
for(char c : s) freq[c-'a']++;
vi freq_values;
int sum=0;
for(int count : freq) {
if(count>0){
freq_values.push_back(count);
sum += count;
}
}
sort(freq_values.rbegin(), freq_values.rend());
if(!freq_values.empty()&&freq_values[0]>=(sum-freq_values[0])){
cout<<2*freq_values[0]-sum<<nline;
} else cout<<sum%2<<nline;
}
return 0;
}
