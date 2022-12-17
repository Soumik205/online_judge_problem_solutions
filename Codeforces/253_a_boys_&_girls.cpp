/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int boy;
    int girl;
    int rem = 0;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    scanf("%d %d", &boy, &girl);

    while(boy != 0 && girl != 0)
    {

        if(boy > girl)
        {
            printf("B");
            boy--;
            printf("G");
            girl--;
        }
        else
        {
            printf("G");
            girl--;
            printf("B");
            boy--;
        }

    }

    if(boy == girl )
    {
        printf("\n");
        return 0;
    }
    else if(boy > girl)
    {
        rem = boy - girl;
        while(rem--) printf("B");
    }
    else
    {
        rem = girl - boy;
        while(rem--) printf("G");
    }

    printf("\n");
    return 0;
}