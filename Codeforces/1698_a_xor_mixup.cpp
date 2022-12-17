#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    vector < int > v;
 
    int test;   cin >> test;
    while(test--) {
        int n;  cin >> n;
        while(n--) {
            int temp;   cin >> temp;
            v.push_back(temp);
            
        }
        cout << v[0] << endl;
        v.clear();
    }
    return 0;
}