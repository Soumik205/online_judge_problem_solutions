#include<stdio.h>

int main()
{
    double k;
    double n;
    double s;
    double p;

    scanf("%lf %lf %lf %lf", &k, &n, &s, &p);

    double a;
    double total_sheets;
    int pack;

    if( n > s)
    {
        a = ceil(n / s);
        total_sheets = a * k;
        pack = ceil(total_sheets / p);

        printf("%d\n", pack);
        return 0;
    }
    else
    {
        a = 1;
        total_sheets = a * k;
        pack = ceil(total_sheets / p);

        printf("%d\n", pack);
        return 0;
    }
}
