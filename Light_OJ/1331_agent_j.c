#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)

int main()
{
    int i, n;
    double r1, r2, r3, a, b, c, A, B, C, s, tri, area;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
         scanf("%lf%lf%lf",&r1,&r2,&r3);

         a = r3 + r2;
         b = r1 + r3;
         c = r2 + r1;


         A = acos( ((b*b)+(c*c)-(a*a)) /(2*b*c));
         B = acos( (-(b*b)+(c*c)+(a*a)) /(2*a*c));
         C = acos( ((b*b)-(c*c)+(a*a)) /(2*a*b));


         s = (a + b + c) / 2;
         tri = sqrt(s*(s-a)*(s-b)*(s-c));


         area = tri - (0.5)*(r1*r1*A + r2*r2*B + r3*r3*C);

         printf("Case %d: %0.08lf\n", i +1, area);


    }

    return 0;
}
