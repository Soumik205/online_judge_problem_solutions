#include <bits/stdc++.h>

using namespace std;

unsigned long long convertDecimalToBinary(unsigned long long n)
{
    unsigned long long binaryNumber = 0;
    unsigned long long count = 0;
    unsigned long long remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;

        if (remainder == 1) count ++;
        i *= 10;
    }
    return count;
}

int main()
{
    unsigned long long n;  cin >> n;
    unsigned long long temp;
    unsigned long long count;
    unsigned long long temp_temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        count = convertDecimalToBinary(temp);

        if (count % 2 == 0) printf ("Case %d: even\n", i + 1);
        else printf ("Case %d: odd\n", i + 1);
    }

    return 0;

}
