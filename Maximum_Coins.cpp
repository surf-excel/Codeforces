#include<bits/stdc++.h>
#define ll long long
#define nline '\n'
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    ll l = a - b;
    ll flag = 0;
    ll sol = 0;

    for (int i = 1; i <= l; ++i)
    {
        flag += 1 << i;
    }

    for (int i = l + 1; i <= a; ++i)
    {
        sol += 1 << i;
    }

    cout << sol - flag << nline;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        solve();
    }
    return 0;
}
