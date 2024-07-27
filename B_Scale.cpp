#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define vvc vector<vector<char>>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vvc matrix(n, vector<char>(n));
        int i = 0;
        bool readRows = true;
        while (readRows) {
            string row;
            cin >> row;
            int j = 0;
            bool readCols = true;
            while (readCols) {
                matrix[i][j] = row[j];
                j++;
                if (j >= n) readCols = false;
            }
            i++;
            if (i >= n) readRows = false;
        }
        i = 0;
        bool printRows = true;
        while (printRows) {
            int j = 0;
            bool row = true;
            while (row) {
                cout << matrix[i][j];
                j =j+ k;
                if (j >= n) row = false;
            }
            cout << '\n';
            i =i+ k;
            if (i >= n) printRows = false;
        }
    }
    return 0;
}