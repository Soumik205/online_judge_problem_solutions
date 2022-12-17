#include<bits/stdc++.h>

int main()
{
    int input;
    scanf("%d", &input);

    int rem;
    int xtra;

    rem = input - 10;

    if(rem <= 0)
    {
        printf("0\n");
        return 0;
    }
    else if(rem == 10)
    {
        printf("15\n");
        return 0;
    }
    else if(rem > 11)
    {
        printf("0\n");
        return 0;
    }
    else if(rem == 11)
    {
        printf("4\n");
        return 0;
    }
    else
    {
        printf("4\n");
        return 0;
    }
}
