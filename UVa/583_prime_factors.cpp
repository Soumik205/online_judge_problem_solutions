#include <bits/stdc++.h>
using namespace std;

vector < int > primes;

void primeFactorization (int n) {
    if (n < 0) n *= (-1);
    while (n % 2 == 0) {
        primes.push_back (2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            primes.push_back (i);
            n /= i;
        }
    }
    if (n > 2) primes.push_back (n);
    sort (primes.begin(), primes.end());
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        int n;  cin >> n;
        if (n == 0) return 0;
        primeFactorization (n);

        int size = primes.size();
        if (n < 0) {
            cout << n << " = -1 x ";
            for (int i = 0; i < size; i++) {
                cout << primes[i];
                if (size - i > 1) cout << " x ";
            }
        }
        else {
            cout << n << " = ";
            for (int i = 0; i < size; i++) {
                cout << primes[i];
                if (size - i > 1) cout << " x ";
            }
        }
        cout << endl;
        primes.clear();
    }
}