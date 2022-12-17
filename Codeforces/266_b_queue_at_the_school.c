#include<stdio.h>
#include<string.h>

int main()
{
    int people, time, i, j;

    scanf("%d %d", &people, &time);

    getchar();

    char arr[people], temp;

    scanf("%s", arr);


    for(j=0; j<time; j++)
    {
        for(i=0; i<people; i++)
        {
            if(arr[i] == 'B' && arr[i+1] == 'G')
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i++;
            }
        }
    }

    printf("%s\n", arr);

    return 0;
}
