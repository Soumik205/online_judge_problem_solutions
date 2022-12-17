#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;   cin >> s;
    int mark = 0;
    int size = s.size();

    if(s[0] == 'h') {
        cout << "http://";
        mark = 4;
        cout << s[4];
    }
    else if (s[0] == 'f') {
        cout << "ftp://";
        mark = 3;
        cout << s[3];
    }

    mark++;
    
    for (int i = mark; i < size; i++) {
        if (s[i] == 'r' && s[i + 1] == 'u') break; 
        cout << s[i] ;
        mark++;
    } 

    //cout << mark << endl;

    cout << ".ru";

    mark += 2;

    if (mark < size) {
        cout << "/";
        while (mark < size) {
            cout << s[mark];
            mark++;
        }
    }
    printf ("\n");
    return 0;
}