#include<bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;
bool lucky(int l){ /*This function in build for check the number is either lucky_number or not*/
    int digit=0;
    while (l !=0)
    {
        digit %=10; //To determined the last digit of the number
        if(!(l==4 || l==7)){//To check the number is lucky or not
            return false;//Its means the number is failed t be a lucky number
        }
        l /=10; //To determine the second last digit        /*This code is written by
                                                            //Mihir Bormon
    }
    return true;
}
void solve(){
    ll n,k;
    cin>>n>>k;  //For take the inputs from the user
    bool found=false;
    for (int i = n; i <= k; i++)
    {
        if(lucky(i)){
            cout<<i<<nline; //To print the lucky numbers
            found=true;  //To tell the program that the lucky number is found congratulations
        }
    }
    if(!found){
        cout<<"-1"; //To print the -1 if the lucky number is not found
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}