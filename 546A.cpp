#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, n, w, sum1 = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum1 += (i * k);
    }
    if (n >= sum1)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << sum1 - n << "\n";
    }

    return 0;
}