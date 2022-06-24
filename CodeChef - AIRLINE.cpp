// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if (e < a && e < b && e < c)
		cout << "NO\n";
	else
	{
		if ((a + b) <= d && c <= e)
			cout << "YES\n";
		else if ((b + c) <= d && a <= e)
			cout << "YES\n";
		else if ((a + c) <= d && b <= e)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

int main()
{
	int t; cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
