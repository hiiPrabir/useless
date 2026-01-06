#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <cmath>
#include <algorithm>
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
        int a;
        cin >> a;
        vector<long long> ar, br;
        while (a > 0)
        {
            ar.push_back(a % 2);
            a = a / 2;
        }
        reverse(ar.begin(), ar.end());
        for (int i = 0; i < ar.size(); i++)
        {
            cout << ar[i];
        }
    }
    return 0;
}