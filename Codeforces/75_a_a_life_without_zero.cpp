/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int zero(int n)
{
    int total = 0;
    int power = 1;
    int temp;

    while( n != 0)
    {
        temp = n % 10;
        n /= 10;

        if( temp != 0)
        {
            total += temp * power;
            power *= 10;
        }
    }

    return total;
}

int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d", &a, &b);

    c = a + b;

    if(zero(a) + zero(b) == zero(c)) printf("YES\n");
    else printf("NO\n");

    return 0;

}
