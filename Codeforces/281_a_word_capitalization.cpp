/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[10000];
    scanf("%s", arr);

    if(arr[0] >= 'a' && arr[0] <= 'z') arr[0] = (arr[0] - 'a') + 'A';
    else
    {
        printf("%s\n", arr);
        return 0;
    }

    printf("%s\n", arr);

    return 0;
}
