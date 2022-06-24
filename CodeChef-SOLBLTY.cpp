#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;

    while (t--) {

        cin >> a >> b >> c;
        int res = b + (100 - a) * c;
        cout << res * 10 << "\n";
    }

    return 0;
}