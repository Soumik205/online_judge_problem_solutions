#include<stdio.h>
#define pi acos(-1)

int main()
{
    double r1, r2, h, p, i, test_case, r, x;
    double area;

    scanf("%lf", &test_case);

    for(i=0; i<test_case; i++)
    {
        scanf("%lf %lf %lf %lf", &r1, &r2, &h, &p);


        x = (r2 * h) / (r1 - r2);

        r = (r2 *(p + x)) / x;

        area = (1.0/3 )* pi * ((r*r*(p+x))-(r2*r2*x));


        printf("Case %0.0lf: %lf\n", i+1, area);

    }

    return 0;
}
