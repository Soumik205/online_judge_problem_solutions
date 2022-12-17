#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    vector < pair < int , int > > v;
    long long count = 0;
    bool track1 = false;
    bool track2 = false;
    bool track3 = false;
    bool track4 = false;

    for (int i = 0 ; i < n; i++) {
        int a, b;   cin >> a >> b;
        v.push_back (make_pair(a, b));
    }

    sort (v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i].first == v[j].first and v[j].second < v[i].second) track1 = true;
            if (v[i].first == v[j].first and v[j].second > v[i].second) track2 = true;
            if (v[i].first < v[j].first and v[j].second == v[i].second) track3 = true;
            if (v[i].first > v[j].first and v[j].second == v[i].second) track4 = true;
        }
        if (track1 and track2 and track3 and track4) count++;
        track1 = false;
        track2 = false;
        track3 = false;
        track4 = false;
    }

    cout << count << endl;
    return 0;
}