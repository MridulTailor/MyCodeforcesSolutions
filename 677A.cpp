#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, h;
    cin >> n >> h;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }
    cout << ans << "\n";

    return 0;
}