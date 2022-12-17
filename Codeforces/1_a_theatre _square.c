#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n, m, a, p, q;
    scanf("%llu %llu %llu", &n, &m, &a);



    p = ceil((double)n/a);
    q = ceil((double)m/a);


    printf("%llu", p*q);

    return 0;

}
