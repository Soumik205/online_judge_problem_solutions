#include<bits/stdc++.h>

int main()
{
    char arr[120];
    gets(arr);

    int i;
    int length;

    length = strlen(arr);

    for(i = 0; i < length; i++)
    {
        if(arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
