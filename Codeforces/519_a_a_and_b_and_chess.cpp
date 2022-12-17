#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);


    string s;   
    int white = 0;
    int black = 0;

    for (int i = 0; i < 8; i++) {
        cin >> s;

        for (int j = 0; j < 8; j++) {
            if (s[j] == 'Q') white += 9;
            else if (s[j] == 'R') white += 5;
            else if (s[j] == 'B') white += 3;
            else if (s[j] == 'N') white += 3;
            else if (s[j] == 'P') white++;

            else if (s[j] == 'q') black += 9;
            else if (s[j] == 'r') black += 5;
            else if (s[j] == 'b') black += 3;
            else if (s[j] == 'n') black += 3;
            else if (s[j] == 'p') black++;
        }
    }

    if (white > black) cout << "White" << endl;
    else if (white < black) cout << "Black" << endl;
    else cout << "Draw" << endl;
    return 0;
}