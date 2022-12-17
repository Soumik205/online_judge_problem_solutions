/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
        int a;
        int b;
        int c;
        int n;
        int temp1;
        int temp2;
        int temp;

        scanf("%d %d %d %d", &a, &b, &c, &n);

        if( c > a || c > b)
        {
            printf("-1\n");
            return 0;
        }

        temp1 = a - c;
        temp2 = b - c;
        temp = temp1 + temp2 + c;

        if(temp < n) printf("%d\n", n - temp);
        else printf("-1\n");

        return 0;
}
