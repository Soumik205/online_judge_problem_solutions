#include<bits/stdc++.h>
#include<math.h>

int main()
{
    int i;
    int j;
    int a = 3;
    int b = 3;
    int x;
    int y;
    int steps;

    int store = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &store);

            if( store == 1)
            {
                x = i + 1;
                y = j + 1;
                steps = fabs(a - x) + fabs(b - y);

                //return 0;
            }
        }
    }
    printf("%d\n", steps);
    return 0;

}
