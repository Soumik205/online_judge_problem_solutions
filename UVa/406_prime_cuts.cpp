#include <bits/stdc++.h>
using namespace std;

#define MX 1000006

int mark[MX];
vector < int > prime;

void sieve()
{
    //1 if not prime, 0 if prime
    int limit = sqrt(1024 + 1);

    mark[0] = 1;
    mark[1] = 1;
    prime.push_back(1);
    prime.push_back(2);

    for (int i = 4; i <= MX; i += 2) mark[i] = 1;
    for (int i = 3; i <= MX; i += 2) {
        if (mark[i] == 0) {
            prime.push_back(i);

            if (i <= limit) {
                for (int j = i + i; j < MX; j += i) mark[j] = 1;
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, c;
    sieve();

    while (cin >> n)
    {
        cin >> c;

        int count = 0;
        int loop = 0;
        int start_index = 0;

        for (int i = 0; prime[i] <= n; i++) count++;

        if (count & 1) {
            loop = (2 * c) - 1;
            start_index = (count - (2 * c) + 1) / 2;
        }
        else {
            loop = 2 * c;
            start_index = (count - (2 * c)) / 2;
        }

        if (loop >= count) {
            printf("%d %d: ", n, c);
            for (int i = 0; i < count; i++) {
                cout << prime[i];
                if (count - i > 1) cout << " ";
            }
            cout << endl;
        }
        else {
            printf("%d %d: ", n, c);
            for (int i = 0; i < loop; i++) {
                cout << prime[start_index];
                if (loop - i > 1) cout << " ";
                start_index++;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}