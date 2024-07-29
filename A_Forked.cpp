#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        
        // Arrays to store all possible moves for a knight
        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};
        
        int cnt = 0;

        // Iterate over all possible knight positions from (xk, yk)
        for (int i = 0; i < 8; ++i) {
            int xi = xk + dx[i];
            int yi = yk + dy[i];
            
            // Check if this position can attack (xq, yq)
            for (int j = 0; j < 8; ++j) {
                if (xi + dx[j] == xq && yi + dy[j] == yq) {
                    cnt++;
                    break; // No need to check further, this (xi, yi) is valid
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
