// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int x1 = (a * x), x2 = (b * y);

	cout << (x1 + x2);
}

int main()
{
	solve();
	return 0;
}
