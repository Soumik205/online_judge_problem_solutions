#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    int i;
    int j;
    int num;
    int max = 0;
    int temp = 0;

    scanf("%d", &test_case);

    for( i = 0; i < test_case; i++)
    {
        max = 0;
        temp = 0;

        scanf("%d", &num);

        for( j = 0; j < num; j++)
        {
            scanf("%d", &temp);
            if(temp > max)
            {
                max = temp;
            }
        }

        printf("Case %d: %d\n", i + 1, max);
    }

    return 0;
}
