#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[6][6];
    int x = 0, ans = 0, y = 0;
    ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    ans = abs(2 - x) + abs(2 - y);
    cout << ans << "\n";
    return 0;
}