#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == b)
        {
            // correct
            cout << 0 << "\n";
        }
        else if (a > b)
        {
            long long p = (a ^ b);
            if (p <= a)
            {
                cout << 1 << "\n";
                cout << p << "\n";
            }
            else
            {
                // wrong part
                cout << 2 << "\n";
                cout << p - (a - 1) << " " << a - 1 << "\n";
            }
        }
        else
        { // a < b
            // correct
            int bits_a = 64 - __builtin_clzll(a);
            int bits_b = 64 - __builtin_clzll(b);
            if (bits_b > bits_a)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << 1 << "\n";
                cout << (a ^ b) << "\n";
            }
        }
    }
    return 0;
}
