#include<stdio.h>

int main()
{
    int weight, cat ;

    scanf("%d", &weight);



    if(weight % 2 == 0 && weight > 2)
    {
        printf("YES\n");

    }

    else
    {
        printf("NO\n");
    }

    return 0;
}
