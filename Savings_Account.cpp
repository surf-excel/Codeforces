#include <bits/stdc++.h>
using namespace std;

class IncomeCalculator {
private:
    int abcSources;
    int abcAmount;
    int abcLimit;
    
public:
    IncomeCalculator(int sources, int amount, int limit) 
        : abcSources(sources), abcAmount(amount), abcLimit(limit) {}
    
    bool needsReduction() {
        int totalAmount = abcSources * abcAmount;
        return totalAmount > abcLimit;
    }
    
    int calculateReduction() {
        int totalAmount = abcSources * abcAmount;
        if (!needsReduction()) {
            return 0;
        } else {
            return (totalAmount - abcLimit + abcAmount - 1) / abcAmount;
        }
    }
};

void solve() {
    int sources, amount, limit;
    cin >> sources >> amount >> limit;
    
    IncomeCalculator calc(sources, amount, limit);
    int reduction = calc.calculateReduction();
    cout << reduction << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }
    
    return 0;
}
