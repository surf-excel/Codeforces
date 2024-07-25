#include <bits/stdc++.h>
using namespace std;

class longu {
private:
    vector<long long> x;
    map<int, int> f;
    vector<long long> v;

public:
    longu() {}

    void readInput() {
        long long numElements;
        cin >> numElements;
        x.resize(numElements);
        long long index = 0;
        while (index < numElements) {
            cin >> x[index];
            f[x[index]]++;
            index++;
        }
    }

    void getFrequencyVector() {
        for (auto it : f) {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end(), greater<long long>());
    }

    long long cal() {
        long long maximum = 0;
        long long sum = 0;
        long long i = 1;
        while (i <= v.size()) {
            sum =sum+ v[i - 1];
            long long value = (sum / i) * i;
            maximum = max(maximum, value);
            i++;
        }
        return maximum;
    }

    void solve() {
        readInput();
        getFrequencyVector();
        long long result = cal();
        cout << result << '\n';
    }
};
int main() {
    int T;
    cin >> T;

    while (T--) {
        longu cal;
        cal.solve();
    }
    return 0;
}