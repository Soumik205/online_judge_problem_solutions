#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[105];
    char arr2[105];
    char arr[105];
    int i;



    /*for(i = 0; i < 105; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < length; i++)
    {
        scanf("%d", &arr2[i]);
    }*/

    gets(arr1);
    gets(arr2);

    int length = strlen(arr1);
    for(i = 0; i < length; i++)
    {
        if( arr1[i] == arr2[i])
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }

    for(i = 0; i < length; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
