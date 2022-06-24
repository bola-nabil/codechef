#include <iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    char ch;
    while (t--)
    {
        cin >> ch;
        if (ch == 'B' || ch == 'b')
            cout << "BattleShip" << endl;
        else if (ch == 'C' || ch == 'c')
            cout << "Cruiser" << endl;
        else if (ch == 'D' || ch == 'd')
            cout << "Destroyer"<<endl;
        else
            cout << "Frigate" << endl;
    }
    return 0;
}