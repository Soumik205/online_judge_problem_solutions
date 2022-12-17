#include<stdio.h>

int main()
{
    unsigned long long test_case, total, i, j, cat, remainder;

    scanf("%llu", &test_case);

    for(i=0; i<test_case; i++)
    {
        scanf("%llu", &total);

         if(total % 2 == 0)
         {
             for(j=2; j<total; j++)
             {
                 cat = total / j;
                 remainder = total % j;

                 if(cat >=1 &&remainder == 0 && cat % 2 != 0)
                 {
                     printf("Case %llu: %llu %llu\n", i+1, cat, j);
                     break;
                 }

             }
         }

         else
         {
             printf("Case %llu: Impossible\n", i+1);
         }
    }

    return 0;
}
