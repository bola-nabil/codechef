#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t, n;
    cin >> t;
     while(t--)
    {
        cin >> n;
        int *a = new int [n], p[3] = { 0,0,0 }, c = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 10)
            {
                p[(a[i] / 5) - 1]++;
                if (a[i] == 10 && p[0] > 0)
                    p[0]--;
                
                else if (a[i] == 15)
                {
                    if (p[1] > 0)
                        p[1]--;
                    
                    else if (p[0] > 1)
                        p[0] = p[0] - 2;
                    
                    else
                    {
                        c = 1;
                        break;
                    }
                }
                else
                {
                    c = 1;
                    break;
                }
            }
            else
                p[0]++;
            
        }
        if (c == 0)
            cout << "YES\n";
        
        else
            cout << "NO\n";
        
    }
    return 0;
}