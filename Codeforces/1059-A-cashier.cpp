#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    int total_time;
    int smoke;
    int count = 0;
    int current_time = 0;
    int time;
    int length;

    cin >> number >> total_time >> smoke;

    while (number--)
    {
        cin >> time >> length;

        count += (time - current_time) / smoke;
        current_time = time + length;
    }

    count += (total_time - current_time) / smoke;

    cout << count << endl;
    return 0;
}
