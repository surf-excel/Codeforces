#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define mod 1000000007
string stringlower(const string& str) {
    string result = str;
    for (char &c : result) {
        c = tolower(c);
    }
    return result;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y;
    getline(cin, x);
    getline(cin, y);
    x=stringlower(x);
    y=stringlower(y);
    if (x == y) {
        cout << "0\n";
    } else if (x < y) {
        cout << "-1\n";
    } else {
        cout << "1\n";
    }
    return 0;
}
