#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int numElements;
    cin >> numElements;
    vi elements(numElements);
    read(elements);

    int maximum = 0;
    int sum = 0;
    int i = 1;
    bool keepGoing = true;

    while (keepGoing && sum != 0) {
      sum += elements[i - 1];
      int value = (sum / i) * i;
      maximum = max(maximum, value);
      i++;
      keepGoing = i <= numElements;
    }
    cout << maximum << '\n';
  }

  return 0;
}