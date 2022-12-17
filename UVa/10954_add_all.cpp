#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        int n;  cin >> n;
        if (n == 0) break;

        priority_queue < int > pq;
        int total = 0;

        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            pq.push (-temp);
        }

        while (pq.size() > 1) {
            int v = (-pq.top());
            pq.pop();
            int v2 = (-pq.top());
            pq.pop();
            int value = v + v2;
            total += value;
            pq.push (-value);
        }
        cout << total << endl;
    }
    return 0;
}

//another approach without using minus, prio_queue ascending sort

/*
while (true) {
        int n;  cin >> n;
        if (n == 0) break;

        priority_queue < int, vector < int >, greater < int > > pq;
        int total = 0;

        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            pq.push (temp);
        }

        while (pq.size() > 1) {
            int v = (pq.top());
            pq.pop();
            int v2 = (pq.top());
            pq.pop();
            int value = v + v2;
            total += value;
            pq.push (value);
        }
        cout << total << endl;
    }
    
*/