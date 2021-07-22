#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > a[i - 1] || a[i + 1] < a[i])
            {
                ans = i + 1;
                break;
            }
            ans = -1;
        }
        cout << ans << "\n";
    }
    return 0;
}