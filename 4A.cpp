#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int w, flag = 0;
    cin >> w;
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 && i + j == w)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    return 0;
}
