#include <bits/stdc++.h>
using namespace std;
int count_unique_char(string str)
{

    int hash[128] = {0};
    int i, c = 0;
    for (i = 0; i < str.length(); ++i)
    {
        hash[str[i]] = 1;
    }
    for (i = 0; i < 128; ++i)
    {
        c += hash[i];
    }
    return c;
}
int main()
{
    string s;
    cin >> s;
    if (count_unique_char(s) % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}