#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime (ll n) 
{ 
    if (n <= 1) return false; 
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false; 
    }
    return true; 
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        ll n;  cin >> n;
        if (n == 0) return 0;
        bool flag = true;

        ll start_number = 3;
        ll end_number = n - 3;

        while (start_number != end_number) {
            if (isPrime (start_number) and isPrime (end_number)) {
                printf ("%lld = %lld + %lld\n", n, start_number, end_number); 
                flag = false;
                break;
            }
            start_number++;
            end_number--;
        }
        if (flag) {
            if (isPrime (start_number) and isPrime (end_number)) {
                printf ("%lld = %lld + %lld\n", n, start_number, end_number); 
                flag = false;
            }
        }

        if (flag) {
            cout << "Goldbach's comjecture is wrong." << endl;
        }
    }
    return 0;
}