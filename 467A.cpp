#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int p[n], q[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        if (q[i] - p[i] >= 2)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}