#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n; cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int even=0,odd=0,negative=0,positive=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]%2==0){
        even++;
    }
    else odd++;
    if(arr[i]>0){
        positive++;
    }
    else if(arr[i]<0){ negative++; }
}
cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl<<"Negative: "<<negative<<endl;

return 0;}