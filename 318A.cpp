#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k, ans;
    cin >> n >> k;
    ll od, ev;
    if (n % 2 == 0)
    {
        od = n / 2;
        ev = n / 2;
    }
    else
    {
        od = (n / 2) + 1;
        ev = (n / 2);
    }
    if (k <= od)
    {
        ans = 1 + (2 * (k - 1));
    }
    else if (k > od)
    {
        k = k - od;
        ans = 2 + (2 * (k - 1));
    }
    cout << ans << "\n";
    return 0;
}