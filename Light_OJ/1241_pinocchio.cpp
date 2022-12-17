#include <bits/stdc++.h>

using namespace std;

#define sf(t) scanf("%d", &t);
#define pf(t) printf("%d\n", t);
#define ssii(a,b) scanf("%d%d",&a,&b)
#define cover(a,d) memset(a,d,sizeof(a)) 


int main()
{
    int test;   sf(test);
    int t = 0;
    int count = 0;
    

    while (test--) {
        int n;  sf(n);
        int arr[n];
        cover (arr, 0);

        for (int i = 0; i < n; i++) {
            sf(arr[i]);
        }

        int a = arr[0] - 2;
        count = ceil( a / 5.0);

        for (int i = 0; i < n - 1; i++) {
            a = arr[i + 1] - arr[i];
            count += ceil(a / 5.0);
        }

        printf("Case %d: %d\n", ++t, count);
    }
    return 0;
}