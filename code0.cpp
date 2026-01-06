#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    cin >> n;
    vector<int> counts(n + 1, 0);
    for (long long x = 1; x * x * 2 < n; x++)
    {
        for (long long y = x + 1;; y++)
        {
            long long val = x * x + y * y;
            if (val > n)
                break;
            counts[val]++;
        }
    }
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (counts[i] == 1)
        {
            result.push_back(i);
        }
    }
    cout << result.size() << "\n";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}