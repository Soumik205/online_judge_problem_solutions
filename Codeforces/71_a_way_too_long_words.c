#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, length, j;
    char arr[102];

    scanf("%d", &n);

    getchar();

    for(i=0; i<n; i++)
    {
        gets(arr);

        length = strlen(arr);

        if(length <= 10)
        {
            puts(arr);
        }
        else
        {
            printf("%c%d%c\n", arr[0], length-2, arr[length-1] );
        }

    }

    return 0;


}
