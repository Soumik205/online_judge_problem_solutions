#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)


int main()
{
    int i, n;
    double r, area;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%lf", &r);

        area = ((4*r*r) - (pi *r*r));

        printf("Case %d: %0.2lf\n", i+1, area);
    }

    return 0;
}
