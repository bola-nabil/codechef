// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k; cin >> k;
	int x = arr[k - 1];
	sort(arr, arr + n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			count = i + 1;
	}
	cout << count << endl;
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
