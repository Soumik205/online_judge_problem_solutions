/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int subject;
    scanf("%d", &subject);

    int arr[subject];
    int i;
    int sum = 0;
    double avg;
    double temp;
    int n;
    int tmp;
    int temp1;
    int cnt = 0;


    for(i = 0; i < subject; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < subject; i++)
    {
        sum += arr[i];
    }

    printf("%d", sum);

    avg =ceil(sum / subject);

    printf("AVG %lf\n", avg);

    if( avg >= 4.5)
        printf("0\n");

    else
    {
        temp = 4.5000 - avg;
        temp *= subject;
        temp = ceil(temp);
        temp1 = temp;


        n = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + n);

        for (i = 0; i < n; ++i)
        {
            printf("%d", arr[i]);
        }
        printf("\n");

        while( temp1 >= 1)
        {
            tmp = 5 - arr[i];
            temp1 = temp1 - tmp;
            cnt++;
            i++;
        }

        printf("%d\n", cnt);

    }

    return 0;


}
