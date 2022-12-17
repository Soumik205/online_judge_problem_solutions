/*
        created By Soumik Ghosh!
        Department of computer Science & Engineering.
        chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    int seats;
    int people;
    string num;

    cin >> test;

    for(int i = 0; i < test; i++)
    {
        cin >> seats >> people;
        cin >> num;
        people++;

        int count = 0;
        int maxcount = 0;

        for(int j = 0; j < num.size(); j++)
        {
            if(num[j] == '0')
            {
                count++;
                maxcount = max(maxcount, count);
            }
            else
                count = 0;
        }

        if(people <= maxcount) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
