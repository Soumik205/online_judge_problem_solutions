#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int sum = 0;
    int count = 0;
    cin >> str;

    while (str.size() > 1)
    {
        for (int i = 0; i < str.size(); i++) sum += str[i] - '0';
        count++;
        str = to_string(sum);
        sum = 0;
    }
    cout << count << endl;
    return 0;
}


