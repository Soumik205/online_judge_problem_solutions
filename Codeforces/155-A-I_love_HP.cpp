#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    scanf("%d\n", &num);
    int minimum;
    int maximum;
    int a;
    int i;
    int amazing = 0;

    scanf("%d", &minimum);

    maximum = minimum;

    for( i = 1; i < num; i++ )
    {
        scanf("%d", &a);

        if(a > maximum)
        {
            maximum = a;
            amazing++;
        }
        else if(a < minimum)
        {
            minimum = a;
            amazing++;
        }
    }


    printf("%d\n", amazing);
    return 0;


}
