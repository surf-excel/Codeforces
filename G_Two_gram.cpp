#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int max = 0;
    string most;
    for (int i = 0; i < n - 1; ++i) {
        string g = s.substr(i, 2);
        int f = 0;
        for (int j = 0; j < n - 1; ++j) {
            if (s.substr(j, 2) == g) {
                f++;
            }
        }
        if (f > max) {
            max= f;
            most = g;
        }
    }

    cout << most << endl;

    return 0;
}
