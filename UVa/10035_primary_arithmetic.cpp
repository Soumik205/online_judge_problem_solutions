#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    long long a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 and b == 0) return 0;

        int count = 0;
        int carry = 0;

        while (true) {
            int temp1 = a % 10;
            int temp2 = b % 10;
            a /= 10;
            b /= 10;

            if (temp1 + temp2 + carry >= 10) {
                count++;
                carry = 1;
            }
            else carry = 0;

            if (a == 0 and b == 0) break;
        }

       if (count == 0) printf ("No carry operation.\n");
       else if (count == 1) printf ("%d carry operation.\n", count);
       else printf ("%d carry operations.\n", count);
    }
    return 0;
}