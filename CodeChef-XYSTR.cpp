#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;

    while (t--)
    {
        int count = 0;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                count++;
                i++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}