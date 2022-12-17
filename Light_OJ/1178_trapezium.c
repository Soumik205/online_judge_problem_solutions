#include<stdio.h>
#include<math.h>
int main()
{
    int i, n;
    double a, b, c, d, h, s, tri, area;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        s =(d + b+ fabs(a-c)) / 2;
        tri = sqrt(s* (s-b)* (s-d) * (s-fabs(a-c)));
        h = ( (2*tri) / fabs(a-c) );
        area = ( (a+c)/2) * h;

        printf("Case %d: %lf\n", i+1, area);
    }

    return 0;
}
