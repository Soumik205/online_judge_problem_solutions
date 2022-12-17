#include<stdio.h>
#include<math.h>
int main()
{
    int u_pos, l_pos, time, i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%d %d", &u_pos, &l_pos);

        time = (fabs(u_pos - l_pos))*4 +19 + u_pos*4;

        printf("Case %d: %d\n", i+1, time );
    }

    return 0;
}
