#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            count1++;
        }
        else if (str[i] == 'D')
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << "Anton\n";
    }
    else if (count2 > count1)
    {
        cout << "Danik\n";
    }
    else if (count1 == count2)
    {
        cout << "Friendship\n";
    }
    return 0;
}