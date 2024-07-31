#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while (t--) {
int n; cin >> n;
string s; cin >> s;
int x = 0, y = 0;
for (char c : s) {
if (c == 'N') y++;
else if (c == 'S') --y;
else if (c == 'E') ++x;
else if (c == 'W') --x;
}
if (x % 2 || y % 2) {
cout<<"NO"<<nline;
continue;
}
int high_x = x / 2, hy = y / 2;
bool found_a = false, found_b = false;
int cx = 0, cy = 0;
string r = s;
for (char &c : r) {
if (c == 'N') {
if (!found_a || cy < hy) {
++cy;
c = 'H';
found_a = true;
} else {
c = 'R';
found_b = true;
}
} else if (c == 'S') {
if (!found_a || cy > hy) {
cy--;
c = 'H';
found_a = true;
} else {
c = 'R';
found_b = true;
}
} else if (c == 'E') {
if (!found_a || cx < high_x) {
++cx;
c = 'H';
found_a = true;
} else {
c = 'R';
found_b = true;
}
} else if (c == 'W') {
if (!found_a || cx > high_x) {
--cx;
c = 'H';
found_a = true;
} else {
c = 'R';
found_b = true;
}
}
}
if (found_a && found_b) {
cout <<r<<nline;
} else {
cout<<"NO"<<nline;
}
}
return 0;
}
