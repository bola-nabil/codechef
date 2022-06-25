// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int p1 = (a * b), p2 = (x * y);

	if (p2 >= p1)
		cout << "Yes\n";
	else
		cout << "No\n";
}

int main()
{
	int t; cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
