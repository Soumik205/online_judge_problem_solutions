/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int height;
    int count = 0;
    int n;
    int i;
    int temp = 0;

    scanf("%d %d", &size, &height);

    int arr[size];
    memset(arr, 0, size*sizeof(arr[0]) );

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for(i = 0; i < size - 1; i++)
    {
        if(arr[i] + height >= arr[i] && arr[i] + height <= arr[i + 1]) count += 2;
        else if (arr[i] - height >= arr[i] && arr[i] - height <= arr[i + 1]) count += 2;
    }

    printf("%d\n", count);

    return 0;

}
