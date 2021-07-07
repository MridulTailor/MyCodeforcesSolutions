#include <bits/stdc++.h>
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
        long long int a, b;
        cin >> a >> b;
        int count = 0;
        if (a % b == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            count = b - a % b;
            cout << count << "\n";
        }
    }
    return 0;
}