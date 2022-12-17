/* Okay, let’s start reducing this problem. There is a observation that if there’s already a strongly connected component(scc) 
in the graph, then you don’t need to add an edge between two nodes from that scc. So we can just ignore all the sccs. 
So convert the sccs to nodes. The graph will be now a DAG.
Now we are faced with this problem: Given a DAG, the minimum number of edges to make a cycle consisting of every node on that DAG. 
Here’s the clever part. To make a cycle, there should be at least one edge coming out from every node and at least one edge going in that node. 
So, count the number of nodes that have indegree = 0. Also the nodes with outdegree = 0. Answer is the maximum of these two counts.
There is a corner when number of nodes in the DAG is 1. */


#include <bits/stdc++.h>
using namespace std;

//typedefs
typedef long long LL;
typedef vector < int > VI;
typedef vector < LL > VL;
typedef vector < VI > VVI;
typedef vector < VL > VVL;
typedef pair < int, int > PII;
typedef pair < double, double > PDD;
typedef pair < LL, LL > PLL;
typedef vector < PII > VII;
typedef vector < PLL > VLL;

//#Defines
#define pb push_back
// #define pb emplace_back
#define F first
#define S second
//#define mp make_pair
#define all(c)		c.begin(), c.end()
#define rev(c)      c.rbegin(), c.rend()
#define endl '\n'
#define pf printf
#define sf scanf
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)
//if harmonic numbers need to be calculated, precalculate upto 1e6, then for any x > 1e6
//call harmonic(x + 0.5)
#define RESET(a, b)	memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;


/************************************* END OF TEMPLATE *************************************/

const int MX = 100005;
vector < int > adj[MX];
vector < int > transpose[MX];
bool visited[MX];
vector < int > order;
int comp[MX];
int cnt = 0;
bool in[MX];
bool out[MX];

void dfs1 (int src) {
    visited[src] = true;
    for (auto dest : adj[src]) {
        if(!visited[dest]) dfs1 (dest);
    }
    order.push_back(src);
}
void dfs2 (int src) {
    visited[src] = true;
    comp[src] = cnt;
    for (auto dest : transpose[src]) {
        if(!visited[dest]) dfs2 (dest);
    }
}
int scc (int nodes) {
    RESET (visited, false);
    for (int i = 1; i <= nodes; i++) {
        if (!visited[i]) {
            dfs1(i);
        }
    }
    reverse (order.begin(), order.end());
    cnt = 0;
    RESET (visited, false);
    for (int i = 0; i < nodes; i++) {
        int temp = order[i];
        if (!visited[temp]) {
            ++cnt;
            dfs2(temp);
        }
    }
    return cnt;
}

int main()
{
    #ifndef ONLINE_JUDGE
        /* freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout); */
    #endif
    // optimize();

    int test;   cin >> test;
    int t = 0;
    while (test--) {
        int nodes, edges;   cin >> nodes >> edges;

        // resetting
        memset (in, false, sizeof in);
        memset (out, false, sizeof out);
        memset (visited, false, sizeof visited);
        for (int i = 0; i <= nodes + 5; i++) adj[i].clear();
        for (int i = 0; i <= nodes + 5; i++) transpose[i].clear();
        order.clear();
        memset (comp, 0, sizeof comp);


        //getchar();
        
        for (int i = 0; i < edges; i++) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            transpose[v].push_back(u);
        }

        int no_of_comps = scc(nodes);
        if (no_of_comps == 1) { // this is a corner case
            printf ("Case %d: 0\n", ++t);
            continue;
        }

        //debug
        /* for (int i = 0; i <= nodes; i++) cout << comp[i] << " ";
        cout << endl; */
        
        // the two arrays here are for the in & out check of different comps
        for (int src = 1; src <= nodes; src++) {
            for (auto dest : adj[src]) {
                if (comp[src] != comp[dest]) {
                    in[comp[dest]] = true;
                    out[comp[src]] = true;
                }
            }
        }
        int in_zero = 0, out_zero = 0;
        for (int i = 1; i <= no_of_comps; i++) {
            in_zero += !in[i];
            out_zero += !out[i]; 
        }

        // debug
        // for (int i = 1; i <= no_of_componenets; i++) cout << i << " " << comp[i] << " " << in[comp[i]] << " " << out[comp[i]] << endl;

        // output
        int ans = max (in_zero, out_zero);
        printf("Case %d: %d\n", ++t, ans);
    }
    return 0;
}

/* 
Case 1: 0
0 1 3 2 4 
Case 2: 1
0 7 8 6 9 11 10 1 2 3 5 4 
Case 3: 4
0 6 7 5 8 10 9 1 2 3 4 
Case 4: 3
0 2 2 3 2 2 4 1 2 2 2 
Case 5: 2
0 2 3 1 
Case 6: 2
 */