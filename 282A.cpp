#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x = 0;
    cin >> n;
    while (n--)
    {

        string s;
        cin >> s;
        if (s == "X++")
        {
            x++;
        }
        else if (s == "++X")
        {
            ++x;
        }
        else if (s == "X--")
        {
            x--;
        }
        else if (s == "--X")
        {
            --x;
        }
    }
    cout << x << "\n";
    return 0;
}