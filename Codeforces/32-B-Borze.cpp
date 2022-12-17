/*
        created By Soumik Ghosh!
        Department of computer Science & Engineering.
        chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[210];
    scanf("%s", arr);

    int length = strlen(arr);

    for(int i = 0; i < length; i++)
    {
        if(arr[i] == '.')
        {
            printf("0");
        }
        else if(arr[i] == '-' && arr[i + 1] == '-')
        {
            printf("2");
            i++;
        }
        else if(arr[i] == '-' && arr[i + 1] == '.')
        {
            printf("1");
            i++;
        }

    }

    printf("\n");

    return 0;
}
