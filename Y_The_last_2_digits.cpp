#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,d,sum=0;
cin>>a>>b>>c>>d;
a=a%100;
b=b%100;
c=c%100;
d=d%100;
sum=a*b*c*d;
sum %=100;
bool onedigit=false;
if(sum<=10){
onedigit=true;
}
if(onedigit){
cout<<"0"<<sum;
}
else{
cout<<sum;
}
return 0;}