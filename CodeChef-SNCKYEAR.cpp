// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;

	if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
		cout << "HOSTED\n";
	else
		cout << "NOT HOSTED\n";
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
