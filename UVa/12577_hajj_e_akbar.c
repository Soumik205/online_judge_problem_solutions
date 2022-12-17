#include<stdio.h>
#include<string.h>


int main()
{
    int count = 1;
    char arr[5];
    int length;

    while(1)
    {

        gets(arr);

        if( arr[0] == '*' )
        {
            return 0;
        }

        if( arr[0] == 'U')
        {
            printf("Case %d: Hajj-e-Asghar\n", count);
        }
        else if( arr[0] == 'H')
        {
            printf("Case %d: Hajj-e-Akbar\n", count);
        }


        count = count + 1;


    }
    return 0;
}

