/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin >> n;
    int a = n;
    double total = 0;
    double temp;

    while (n != 0)
    {
        cin >> temp;
        total += temp;

        n -= 1;
    }

    cout << total / a << endl;

    return 0;
}
