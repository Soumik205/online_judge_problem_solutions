/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int binarytodecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;

    while (num)
    {
        int last_digit = num % 10;
        num = num/10;

        dec_value += last_digit * base;

        base *= 2;
    }

    return dec_value;
}


int main()
{
    int test_case;
    scanf("%d", &test_case);

    int i;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;

    for(i = 0; i < test_case; i++)
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &e, &f, &g, &h);

        if(a == binarytodecimal(e) && b == binarytodecimal(f) && c == binarytodecimal(g) && d == binarytodecimal(h)) printf("Case %d: Yes\n", i + 1);
        else printf("Case %d: No\n", i + 1);
    }

    return 0;
}
