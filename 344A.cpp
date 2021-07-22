#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    string ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ch[i] != ch[i - 1])
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}