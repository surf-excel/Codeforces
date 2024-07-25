#include <bits/stdc++.h>
using namespace std;

void mihirsolve()
{
    int base = 0;
    int n;
    cin >> n;
    int temp = n;
    while (temp > 0)
    {
        base++;
        temp /= 2;
    }
    cout << base << endl;
    
    int value = 2;
    int type = 1;
    int mihir11 = 1;
    
    while (mihir11 <= n)
    {
        if (mihir11 == value)
        {
            type++;
            value *= 2;
        }
        mihir11++;
        cout << type << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--)
    {
        mihirsolve();
    }
    
    return 0;
}
