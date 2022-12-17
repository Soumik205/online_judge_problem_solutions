/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    int temp;
    int count = 0;
    cin >> n;

    int nDigits = floor(log10(abs(n))) + 1;

    if(nDigits <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        for(int i = 0; i < nDigits; i++)
        {
            temp = n % 10;
            n /= 10;

            if(temp == 4 || temp == 7)
            {
                count++;
            }
        }
    }


    if(count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
