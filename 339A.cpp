#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[100];
    cin >> s;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 2; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout << s << "\n";
    return 0;
}