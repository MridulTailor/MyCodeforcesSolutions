#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = 0;; i++)
    {
        if (a > b)
        {
            cout << i << "\n";
            break;
        }
        a = a * 3;
        b = b * 2;
    }
    return 0;
}