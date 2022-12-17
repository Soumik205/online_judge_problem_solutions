#include<stdio.h>

int main()
{
    int prbs;

    scanf("%d", &prbs);

    int i;
    int a;
    int b;
    int c;
    int count = 0;

    for(i=0; i<prbs; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a == 1 && b == 1 || b == 1 && c == 1 || c == 1 && a == 1 || a == 1 && b == 1 && c == 1)
        {
            count = count + 1;
        }

    }
    printf("%d", count);

    return 0;
}
