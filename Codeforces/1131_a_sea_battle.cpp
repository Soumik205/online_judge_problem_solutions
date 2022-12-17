#include <bits/stdc++.h>

using namespace std;

#define sf(t) scanf("%d", &t);
#define pf(t) printf("%d\n", t);
#define ssii(a,b) scanf("%d%d",&a,&b)
#define cover(a,d) memset(a,d,sizeof(a)) 

int main()
{
    long long w1;
    long long h1;
    long long w2;
    long long h2;

    cin >> w1 >> h1 >> w2 >> h2;

    int ans = (w1 + 2) * 2 + 2 * (h1 + h2);

    cout << ans << endl;
    return 0;
}