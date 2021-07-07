#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin >> x;
    float ans = 0, rem = 0;
    for (int i = 5; i >= 1; i--)
    {
        while (x >= i && x != 0)
        {
            x = x - i;
            ans++;
        }
    }
    cout << (int)ans << "\n";
    return 0;
}