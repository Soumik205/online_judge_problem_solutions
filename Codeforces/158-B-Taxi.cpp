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
    scanf("%d\n", &size);

    int arr[size];
    memset(arr, 0, size*sizeof(arr[0]));

    int i;
    for( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    int count3 = 0;
    int count2 = 0;
    int count1 = 0;

    for(i = 0; i < size; i++)
    {
        if( arr[i] == 4) total++;
        else if( arr[i] == 3)
        {
            total++;
            count3++;
        }
        else if( arr[i] == 2)
        {
            count2++;
        }
        else if( arr[i] == 1)
        {
            count1++;
        }
    }

    total += count2 / 2;

    count1 -= count3;

    if(count2 % 2 == 1)
    {
        total += 1;
        count1 -= 2;
    }

    if( count1 > 0)
    {
        total += ceil((float) count1 / 4);
    }

    printf("%d\n", total);
    return 0;

}
