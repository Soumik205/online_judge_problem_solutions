#include<stdio.h>
#include<string.h>

int main()
{
    int test_case, i, marbles;
    char name[10];

    scanf("%d", &test_case);


    for(i=0; i<test_case; i++)
    {
        scanf("%d", &marbles);
        gets(name);

        if(name[10] == 'Alice' && marbles % 2 == 0)
        {
            printf("Case %d: Alice\n", i+1);
            return 0;
        }

        if(name[10] == 'Alice' && marbles % 2 == 1)
        {
            printf("Case %d: Bob\n", i+1);
            return 0;
        }

        if(name[10] == 'Bob' && marbles % 2 == 0)
        {
            printf("Case %d: Bob\n", i+1);
            return 0;
        }

        if(name[10] == 'Bob' && marbles % 2 == 1)
        {
            printf("Case %d: Alice\n", i+1);
            return 0;
        }
    }

    /* something */

    return 0;

}
