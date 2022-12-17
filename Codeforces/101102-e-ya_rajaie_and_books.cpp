/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long test_case;
    long long num;
    long long ans;

    scanf("%lld", &test_case);

    for(int i = 0; i < test_case; i++)
    {
        scanf("%lld", &num);

        ans = num / 5;
        if(num % 5 > 0) ans++;

        printf("%lld\n", ans);
    }

    return 0;
}
