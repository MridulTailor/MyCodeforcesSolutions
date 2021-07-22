#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;

        cin >> a;
        if (a == 1)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        cout << "HARD\n";
    }
    else
    {
        cout << "EASY\n";
    }
    return 0;
}