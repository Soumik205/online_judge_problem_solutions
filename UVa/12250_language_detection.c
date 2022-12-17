#include<stdio.h>
#include<string.h>

int main()
{
    char arr[20];
    char eng[20] = "HELLO";
    char spa[20] = "HOLA";
    char ger[20] = "HALLO";
    char fre[20] = "BONJOUR";
    char ita[20] = "CIAO";
    char rus[20] = "ZDRAVSTVUJTE";
    int count = 1;

    while(1)
    {
        gets(arr);

        if(arr[0] == '#')
        {
            return 0;
        }

        else if(strcmp(arr, eng) == 0)
        {
            printf("Case %d: ENGLISH\n", count);
        }
        else if(strcmp(arr, spa) == 0)
        {
            printf("Case %d: SPANISH\n", count);
        }
        else if(strcmp(arr, ger) == 0)
        {
            printf("Case %d: GERMAN\n", count);
        }
        else if(strcmp(arr, fre) == 0)
        {
            printf("Case %d: FRENCH\n", count);
        }
        else if(strcmp(arr, ita) == 0)
        {
            printf("Case %d: ITALIAN\n", count);
        }
        else if(strcmp(arr, rus) == 0)
        {
            printf("Case %d: RUSSIAN\n", count);
        }
        else
        {
            printf("Case %d: UNKNOWN\n", count);
        }
        count++;
    }
}
