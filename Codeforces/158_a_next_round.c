#include <stdio.h>

int main()
{
    int n;
    int k;
    int i;
    int nxt_rounders = 0;
    scanf("%d %d", &n, &k);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp = a[k - 1];
    if (temp != 0)
    {
        for (i = k; i < n; i++)
        {
            if (a[i] == temp) nxt_rounders++;
            else break;
        }
        nxt_rounders = nxt_rounders + k;
    }

    else
    {
        for (i = k - 1; i >= 0; i--)
        {
            if (a[i] != 0) break;
        }
        nxt_rounders = i + 1;
    }
    printf("%d\n", nxt_rounders);
    return 0;
}
