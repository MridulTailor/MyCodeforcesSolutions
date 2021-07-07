#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    int countU = 0, countL = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            countU++;
        }
        else
        {
            countL++;
        }
    }
    if (countU > countL)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout << str << "\n";
    return 0;
}