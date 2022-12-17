#include<stdio.h>

int main()
{
    int m;
    int n;
    scanf("%d %d",&m, &n);

    int area;
    int num;

    area = m * n;
    num = ceil(area / 2);

    printf("%d\n", num);

    return 0;

}
