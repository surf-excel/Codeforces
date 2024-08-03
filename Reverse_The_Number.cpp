#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        stack<char> s;
        string numStr = to_string(N);

        for (char c : numStr) {
            s.push(c);
        }

        string reversedStr;
        while (!s.empty()) {
            reversedStr += s.top();
            s.pop();
        }
        size_t nonZeroStart = reversedStr.find_first_not_of('0');
        if (nonZeroStart != string::npos) {
            reversedStr = reversedStr.substr(nonZeroStart);
        } else {
            reversedStr = "0"; 
        }

        cout << reversedStr << endl;
    }

    return 0;
}
