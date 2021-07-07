#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len > 10)
        {
            int count = 0;
            for (int i = 1; i < len - 1; i++)
            {
                count++;
            }
            cout << str[0] << count << str[len - 1] << "\n";
        }
        else
        {
            cout << str << "\n";
        }
    }
    return 0;
}
