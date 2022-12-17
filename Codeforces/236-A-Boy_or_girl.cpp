#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    set < char > myset;

    while ( (c = getchar()) && (c != '\n'))
    {
        myset.insert (c);
    }

    if (myset.size() % 2 == 1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

    return 0;

}