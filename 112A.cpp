#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[105], s1[105];
    cin >> s >> s1;
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]), s1[i] = tolower(s1[i]);
    }
    cout << strcmp(s, s1) << endl;

    return 0;
}