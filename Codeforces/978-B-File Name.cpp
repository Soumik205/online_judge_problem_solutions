#include<stdio.h>
#include<string.h>

int main()
{
    int sz;
    scanf("%d\n", &sz);

    char arr[sz];

    gets(arr);

    int i;
    int cnt = 0;

    for(i = 0; i < sz; i++)
    {

        if(arr[i] == 'x' && arr[i + 1] == 'x' && arr[i + 2] == 'x')
        {
            cnt = cnt + 1;
        }

    }

    printf("%d\n", cnt);

    return 0;
}
