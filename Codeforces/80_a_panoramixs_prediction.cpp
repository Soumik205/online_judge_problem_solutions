#include <bits/stdc++.h>
#define MX 1000006

using namespace std;

int mark[MX];
vector < int > prm;

void sieve(int n)
{
    //1 if not prime, 0 if prime
    int limit = sqrt(n + 1);

    mark[0] = 1;
    mark[1] = 1;
    prm.push_back(2);

    for(int i = 4; i <= MX; i += 2) mark[i] = 1;
    for(int i = 3; i <= MX; i += 2)
    {
        if(mark[i] == 0)
        {
            prm.push_back(i);
            if(i <= limit)
            {
                for(int j = i + i; j < MX; j += i) mark[j] = 1;
            }
        }

    }

}

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    sieve(70);

    int n;  cin >> n;
    int m;  cin >> m;

    int temp = n;
    int i = 0;

    while (1) {
        if (prm[i] == n) {
            if (prm[i + 1] == m) {
                cout << "YES" << endl;
                return 0;
            }
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
        i++;
    }
}