#include<stdio.h>

int main()
{
    int test_case;

    scanf("%d", &test_case);

    int i;
    int a;
    int b;
    int c;

    for(i=0; i<test_case; i++)
    {

        scanf("%d %d %d", &a, &b, &c);

        if(a > b && a < c || a > c && a < b)
        {
            printf("Case %d: %d\n", i+1, a);
        }
        else if(a > b && b > c || a < b && b < c)
        {
            printf("Case %d: %d\n", i+1, b);
        }
        else if(a > b && b < c || a < b && b > c)
        {
            printf("Case %d: %d\n", i+1, c);
        }
    }

    return 0;
}
