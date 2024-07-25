#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
    int temp=i;
    while(temp !=0){
        int digit=digit%10;
        if(!(digit ==4 || digit ==7)){
            cout<<"-1";
        }
        temp /=10;
    }
    cout<<i<<" ";
}

return 0;}