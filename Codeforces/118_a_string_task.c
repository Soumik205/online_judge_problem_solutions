#include<stdio.h>
#include<string.h>

int main()
{
    int size = 101;
    char arr[size];
    int length;
    int i;

    for(i = 0; i < size; i++)
    {
        scanf("%c", &arr[i]);
        if(arr[i] == '\n')
        {
            arr[i] = '\0';
            size = i;
            break;
        }

    }

    //getchar();

    length = strlen(arr);

    for(i = 0; i < length; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = 'a' - 'A' + arr[i];
        }
        if(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'y' )

        {
            printf(".%c", arr[i]);
        }
        else
        {
            continue;
        }
    }

    return 0;

}
