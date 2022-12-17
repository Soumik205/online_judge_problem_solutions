#include <bits/stdc++.h>
using namespace std;

int table[1100000];

void kmpTableMaking (string substring) {
    int m = substring.size();
    int i = 0, j = -1;
    table[i] = -1;

    while (i < m) {
        while (j >= 0 && substring[i] != substring[j]) j = table[j];
            
		i++; j++;
        table[i] = j;
    }
}

int kmp (string s, string substring) {
    int i = 0, j = 0, count = 0;
    int n = s.size();
    int m = substring.size();

	kmpTableMaking (substring);

    while (i < n) {
        while (j >= 0 && s[i] != substring[j]) j = table[j];
            
        i++; j++;
    }
    return j; // j returns highest koto length porjonto pattern mil paise
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    int t = 0;

    while (test--) {
        string s;   cin >> s;
        int size = s.size();
        string substring = s;
        reverse (substring.begin(), substring.end() );
        int temp = kmp (s, substring);

        printf ("Case %d: %d\n", ++t, 2 * size - temp);
    }
    return 0;
}