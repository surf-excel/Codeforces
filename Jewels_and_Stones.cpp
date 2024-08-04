#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
#define nline '\n'
using namespace std;
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1e9;
    cin >> t;
    cin.ignore();

    while (t--) {
        stack<char> jewel_stack;
        int cnt = 0;

        char j[105], s[105];
        cin.getline(j, 105);
        cin.getline(s, 105); 
        for (int i = 0; i < strlen(j); i++) {
            jewel_stack.push(j[i]);
        }
        for (int k = 0; k < strlen(s); k++) {
            stack<char> temp_stack = jewel_stack;
            while (!temp_stack.empty()) {
                if (temp_stack.top() == s[k]) {
                    cnt++;
                    break;
                }
                temp_stack.pop();
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
