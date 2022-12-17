#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    char arr[length];
    int i;
    int temp;
    int maximum;
    int max_count;
    int minimum;
    int min_count;
    int time;
    int min_index;

    for(i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    maximum = 0;
    max_count = 0;
    for(i = 0; i <  length; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
            max_count = i;
        }
    }

    //printf("%d\n", max_count);

    minimum = maximum;
    min_count = 0;
    min_index = length - 1;
    for(i = length - 1; i >= 0; i--)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
            min_count = length - i - 1;
            min_index = i;
        }
    }

    //printf("%d\n", min_count);

    time = min_count + max_count;

    if(min_index > max_count)
    {
        printf("%d\n", time);
        return 0;
    }
    else
    {
        printf("%d\n", time - 1);
        return 0;
    }

}
