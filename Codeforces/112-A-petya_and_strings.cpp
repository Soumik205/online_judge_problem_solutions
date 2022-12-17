#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first;
    string second;
    int f_count = 0;
    int s_count = 0;

    cin >> first >> second;

    int first_size = first.size();
    int second_size = second.size();

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    if (first == second) cout << "0" << endl;
    else if (first < second) cout << "-1" << endl;
    else cout << "1" << endl;

    return 0;
}
