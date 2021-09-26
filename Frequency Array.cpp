#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        int count = 0;
        cin >> n;
        int* arr = new int[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = (i + 1); j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
        }

        if (count == 0)
            cout << "prekrasnyy" << endl;
        else
            cout << "ne krasivo" << endl;
    }

    return 0;
}