/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int day;
    char str[100];
    char month[] = "of month";
    char week[] = "of week";

    scanf("%d ", &day);
    gets(str);


    while(strcmp(month, str) == 0)
    {
        if( day >= 1 && day <= 29) printf("12\n");
        else if( day == 30) printf("11\n");
        else if ( day == 31) printf("7\n");
        return 0;
    }
    while (strcmp(week, str) == 0)
    {
        if( day >= 1 && day <= 4 || day == 7) printf("52\n");
        else printf("53\n");

        return 0;
    }

}
