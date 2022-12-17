#include <bits/stdc++.h>

using namespace std;
    
int main()
{
    int n;  scanf ("%d", &n);
    int v;  scanf ("%d", &v);

    if (v > n) 
    {
        cout << n - 1  << endl;
        return 0;
    }
    else if ( v == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    
    n -= 1;

    int rem_city = n - v;
    int cost = v;

    for (int i = 2; i < rem_city + 2; i++)
    {
        cost += i;
    }

    cout << cost << endl;
    return 0;
}