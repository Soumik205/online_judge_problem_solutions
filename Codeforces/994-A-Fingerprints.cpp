#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[10];
    int arr2[10];
    int arr[10];
    memset(arr, 0, 10);
    int count = 0;
    int n;
    int m;
    int i;
    int j;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(j = 0; j < n; j++)
    {
        scanf("%d", &arr2[j]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(arr2[j] == arr1[i])
            {
                arr[i] = arr2[j];
                printf("%d ", arr2[j]);
            }
        }
    }

    /*for(i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }*/

    return 0;

}
