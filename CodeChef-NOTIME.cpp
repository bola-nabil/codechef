// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, h, x;
	cin >> n >> h >> x;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] + x == h)
			count++;
	}
	if (count > 0)
		cout << "YES";
	else
		cout << "NO";
}

int main()
{

	solve();

	return 0;
}
