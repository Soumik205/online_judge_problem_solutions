#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    int in;
    int out;
    int neat;
    int highest = 0;
    int current = 0;

    cin >> test_case;

    while (test_case--)
    {
        cin >> out >> in;
        neat = in - out;

        current += neat;

        if (current > highest) highest = current;
        in = 0;
        out = 0;
    }
    cout << highest << endl;
    return 0;
}
