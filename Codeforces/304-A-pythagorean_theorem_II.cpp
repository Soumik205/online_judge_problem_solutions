#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int c;
    int count = 0;

    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            c = sqrt( (i * i) + (j * j));

            if ( (c * c) == (i * i) + (j * j) && i + j > c && c <= num) count++;
        }
    }

    cout << count << endl;
    return 0;
}
