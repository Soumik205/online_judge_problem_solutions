#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string str;
    int count = 0;
    int size;

    cin >> s;

    str = s;
    size = s.size();


    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') count++;
    }

    if (count == size)
    {
        for (int i = 0; i < size; i++) s[i] = tolower(s[i]);
    }
    else if (size - count == 1 && (s[0] >= 'a' && s[0] <= 'z') )
    {
        for (int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
        s[0] = toupper(s[0]);
    }
    else
    {
        cout << str << endl;
        return 0;
    }

    cout << s << endl;
    return 0;
}
