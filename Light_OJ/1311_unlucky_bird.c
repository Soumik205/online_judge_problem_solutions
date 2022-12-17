#include<stdio.h>
int main()
{
    double v1, v2, v3, a1, a2,  t1, t2, d, s1, s2, s;
    int i, n;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);

        t1 = v1/a1;
        t2 = v2/a2;

        s1 = v1*t1 - 0.5*a1*t1*t1;
        s2 = v2*t2 - 0.5*a2*t2*t2;

        d = s1 + s2;


        if(t1>t2)
        {
            s = v3*t1;
        }

        else{
            s = v3*t2;
        }


        printf("Case %d: %0.6lf %0.6lf\n", i+1, d, s);


    }

    return 0;
}
