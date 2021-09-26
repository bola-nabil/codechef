#include <iostream>
using namespace std;

bool is_pretty(int p)
{
	int t = p % 10;
	if (t == 2 || t == 3 || t == 9)
		return true;
	else
		return false;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int l, r;
		int count = 0;
		cin >> l >> r;
		for (int i = l; i <= r; i++)
		{
			if (is_pretty(i))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}