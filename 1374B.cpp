#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, temp, count = 0;
        int flag = 0;
        cin >> n;
        temp = n;
        while (temp > 0)
        {
            if (temp == 1)
            {
                flag = 1;
                break;
            }
            if (temp % 6 == 0)
            {
                temp = temp % 6;
                count++;
            }
            else
            {
                temp = temp * 2;
                count++;
            }
        }
        
    }
    return 0;
}