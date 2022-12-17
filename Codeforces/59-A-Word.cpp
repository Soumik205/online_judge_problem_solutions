/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[200];
    gets(arr);

    int length;
    int i;
    int cap = 0;
    int small = 0;

    length = strlen(arr);

    for(i = 0; i < length; i++)
    {
        if( arr[i] >= 'A' && arr[i] <= 'Z') cap++;
        else if( arr[i] >= 'a' && arr[i] <= 'z') small++;
    }

    if(cap > small)
    {
        for(i = 0; i < length; i++)
        {
            if(arr[i] >= 'a' && arr[i] <= 'z')
            {
                arr[i] = arr[i] - 32;
            }
        }
    }
    else if(small > cap)
    {
        for(i = 0; i < length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                arr[i] = arr[i] + 32;
            }
        }
    }
    else if(small == cap)
    {
        for(i = 0; i < length; i++)
        {
            if(arr[i] >= 'A' && arr[i] <= 'Z')
            {
                arr[i] = arr[i] + 32;
            }
        }
    }

    printf("%s\n", arr);

    return 0;

}
