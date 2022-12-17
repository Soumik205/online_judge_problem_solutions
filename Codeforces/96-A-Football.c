#include<stdio.h>
#include<string.h>

int main()
{
    char arr[105];
    int i;
    int p = 0;
    int q = 0;
    gets(arr);

    int length = strlen(arr);

    for(i = 0; i < length; i++)
    {
        if(arr[i] == '1')
        {
            p++;
            q = 0;
        }
        else if(arr[i] == '0')
        {
            q++;
            p = 0;
        }
        if(p >= 7 || q >= 7)
        {
            break;
        }

    }
    if(p >= 7 || q >= 7)
        {
            printf("YES\n");
            return 0;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
}



/*#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    int i;
    int count = 0;
    int length;
    gets(arr);

    length = strlen(arr);

    for(i = 0; i < length-1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            count = count + 1;
            if(arr[length - 1] == arr[length - 2])
            {
                count = count + 1;
            }
            if(count == 7)
            {
                printf("YES\n");
                return 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    printf("NO\n");

    return 0;
}*/
