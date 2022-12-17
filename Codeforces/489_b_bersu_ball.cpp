#include <bits/stdc++.h>

using namespace std;

int main()
{
    int boys;   cin >> boys;
    int b[boys];
    for (int i = 0; i < boys; i++) cin >> b[i];
    int girls;  cin >> girls;
    int g[girls];
    for (int i = 0; i < girls; i++) cin >> g[i];
    int count = 0;

    sort (b, b + boys);
    sort (g, g + girls);

    for (int i = 0; i < boys; i++) {
        for (int j = 0; j < girls; j++) {
            if ( abs(b[i] - g[j]) == 1 || (abs(b[i] - g[j]) == 0) ) {
                if (b[i] > 0 && g[j] > 0) {
                    count++;
                    b[i] = 0;
                    g[j] = 0;
                }
            }
            
            
        }
    }

    cout << count << endl;
    return 0;
}