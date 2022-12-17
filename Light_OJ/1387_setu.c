#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    long i, j, test_case, operations,  a=0;
    char cmd[10];

    scanf("%ld", &test_case);

    for(i=0; i<test_case; i++)
    {
        scanf("%ld", &operations);



        printf("Case %ld: \n", i + 1);


        long total = 0;

        for(j=0; j<operations; j++)
        {
            //fflush(stdin);
            getchar();

            scanf("%s", cmd);

            if(strcmp(cmd, "donate") == 0)
            {
                scanf("%ld", &a);
                total = total + a;

            }


            else{

                printf("%ld\n", total);
            }



        }
    }

    return 0;
}
