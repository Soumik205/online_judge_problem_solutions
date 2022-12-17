#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    int i;
    int cnt = 0;

    scanf("%d", &num);

    char arr[100];

    scanf("%s", arr);

    for( i = 0; i < num - 1; i++)
    {
        if(arr[i] == 'R' && arr[i + 1] == 'R' || arr[i] == 'G' && arr[i + 1] == 'G' || arr[i] == 'B' && arr[i + 1] == 'B' ) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}

