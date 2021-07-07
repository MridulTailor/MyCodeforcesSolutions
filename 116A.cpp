#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ans = -1;
    cin >> n;
    int a[n], b[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        x = x - a[i];
        x = x + b[i];
        ans = max(ans, x);
    }
    cout << ans << "\n";
    return 0;
}