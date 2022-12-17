/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int josephus(int n, int k)
{
    if(n == 1) return 1;
    else return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int test_case;
    int i;
    long n;
    long k;
    scanf("%d", &test_case);

    for(i = 0; i < test_case; i++)
    {
        scanf("%ld %ld", &n, &k);

        printf("Case %d: %d\n", i + 1, josephus(n, k));
    }

    return 0;
}
