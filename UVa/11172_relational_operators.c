#include<stdio.h>

int main()
{
    int test_case;
    int i;
    scanf("%d", &test_case);

    long long a;
    long long b;

    for(i=0; i<test_case; i++)
    {

    scanf("%lld %lld", &a, &b);

    if(a < b)
    {
        printf("<\n");
    }
    else if(a > b)
    {
        printf(">\n");

    }
    else
    {
        printf("=\n");

    }
    }

    return 0;
}
