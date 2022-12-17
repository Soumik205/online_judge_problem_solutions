#include<stdio.h>

int main()
{
    int k;

    while(1)
    {
        scanf("%d", &k);

        if(k == 0)
        {
            break;
        }

        int n;
        int m;
        scanf("%d %d", &n, &m);

        int i;
        for(i = 0; i<k; i++)
        {
            int x;
            int y;
            scanf("%d %d", &x, &y);

            if(x > n && y > m)
            {
                printf("NE\n");
            }

            else if(x < n && y > m)
            {
                printf("NO\n");

            }

            else if(x > n && y < m)
            {
                printf("SE\n");

            }

            else if(x < n && y < m)
            {
                printf("SO\n");

            }

            else
            {
                printf("divisa\n");
            }
        }
    }
    return 0;
}
