#include <bits/stdc++.h>

using namespace std;

int main()
{
    int strength;
    int test_case;
    int power;
    int bonus;

    cin >> strength >> test_case;

    for(int i = 0; i < test_case; i++)
    {
        cin >> power >> bonus;

        if(strength > power) strength += bonus;
        else 
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout<< "YES" << endl;
    return 0;
}