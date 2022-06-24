#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        res += i;
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int d, n, x = 0;
        cin >> d >> n;
        for (int i = 1; i <= d; i++)
        {
            n = sum(n);
        }
        cout << n << endl;
    }
    return 0;
}