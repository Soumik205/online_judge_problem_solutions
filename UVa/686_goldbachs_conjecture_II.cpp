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
        ll count = 0;

        if (n == 0) return 0;

        ll start_number = 2;
        ll end_number = n - 2;

        while (start_number != end_number) {
            if (isPrime (start_number) and isPrime (end_number)) count++;
            start_number++;
            end_number--;
        }
        if (isPrime (start_number) and isPrime (end_number)) count++;

        cout << count << endl;
    }
    return 0;
}