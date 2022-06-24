// bola nabil

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < n; i++)
	{
		sum_a += arr[i];
		if (arr[i] > k)
			arr[i] = k;
		sum_b += arr[i];
	}
	cout << (sum_a - sum_b) << endl;
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
