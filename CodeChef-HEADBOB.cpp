// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int c_n = 0, c_y = 0, c_i = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'N')
			c_n++;
		if (s[i] == 'Y')
			c_y++;
		if (s[i] == 'I')
			c_i++;
	}

	if (c_y > 0)
		cout << "NOT INDIAN\n";
	else if (c_i > 0)
		cout << "INDIAN\n";
	else if(c_n == n)
		cout << "NOT SURE\n";
}

int main()
{
	int t; cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
