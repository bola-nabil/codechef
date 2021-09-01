#include <iostream>
#include <cmath>
using namespace std;
const int N = 100010;

int main() {
    int n, ans = 0x7f7f7f7f;
    int *a = new int[N], *x = new int [N], *p=new int [N];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> p[i]>> x[i];

    for (int i = 1; i <= n; i++) {
        if (x[i] > a[i])
            ans = min(ans, p[i]);
    }

    if (ans == 0x7f7f7f7f)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}