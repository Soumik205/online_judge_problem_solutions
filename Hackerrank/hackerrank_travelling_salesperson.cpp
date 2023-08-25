#include <iostream>
using namespace std;

int adj[20][20];
bool visited[20];
const int inf = 100005;
int n;

int travel (int count, int node) {
    if (count == n) return adj[node][0]; // base case final node theke starting node e jaoar cost

    int ans = inf;
    for (int i = 1; i < n; i++) { // i er value 1 theke start kora lage, this is the catch
        if (!visited[i]) {
            visited[i] = true;
            ans = min (ans, travel(count + 1, i) + adj[node][i]); // this is the main condition which checks all the possible scenarios
            visited[i] = false;
        }
    }
    return ans;
}


int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt", "r", stdin);
    //     freopen("out.txt", "w", stdout);
    // #endif

    int test;   cin >> test;
    while (test--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            visited[i] = false;
            for (int j = 0; j < n; j++) cin >> adj[i][j];
        }

        cout << travel (1, 0) << endl;
    }
    return 0;
}


/*
input:
2
2
0 111
112 0
3
0 1000 5000
5000 0 1000
1000  5000  0

output:
223
3000
*/