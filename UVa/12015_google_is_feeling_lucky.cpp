#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    int t = 0;
    vector < string > v;
    priority_queue < pair < int , int > > pq;

    while (test--) {
        for (int i = 0; i < 10; i++) {
            string s;   cin >> s;
            v.push_back (s);
            int value;  cin >> value;
            pq.push (make_pair (value, -i));
        }

        int maximum = pq.top().first;

        printf ("Case #%d:\n", ++t);

        while (pq.top().first == maximum) {
            cout << v[-pq.top().second] << endl;
            pq.pop();
        }
        while(!pq.empty()) pq.pop();
        v.clear();
    }
    return 0;
}