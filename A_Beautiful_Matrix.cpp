#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[100][100],flag,row=0,col=0;
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= 5; j++)
    {
        cin>>a[i][j];
    }
    
}
int i=0,j=0;
bool found =false;
for ( i = 1; i <= 5; i++)
{
    for ( j = 1; j <= 5; j++)
    {
        if(a[i][j]==1){
            found=true;
            break;
        }
    }
    if(found){
        break;
    }
}
if(i !=3){
    row=abs(3-i);
}
if(j !=3){
    col=abs(3-j);
}
flag=row+col;
cout<<flag;
return 0;}