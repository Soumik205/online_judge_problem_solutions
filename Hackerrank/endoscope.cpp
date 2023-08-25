// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int a[50][50],n,m;
int vis[50][50]={0};

void DFS(int xpos,int ypos,int rem_len){
    if(xpos<0 || xpos>=n || ypos<0 || ypos>=m || rem_len==0)
        return;
    vis[xpos][ypos]=1;
    if(a[xpos][ypos] == 1){

        if((xpos!=0) && (a[xpos-1][ypos] ==2 || a[xpos-1][ypos] ==5 || a[xpos-1][ypos] ==6 || a[xpos-1][ypos] ==1))  //up
            DFS(xpos-1, ypos, rem_len-1);

        if((xpos!=n-1) && (a[xpos+1][ypos] ==2 || a[xpos+1][ypos] ==4 || a[xpos+1][ypos] ==7 || a[xpos+1][ypos] ==1)) //down
            DFS(xpos+1, ypos, rem_len-1);

        if((ypos!=0)&& (a[xpos][ypos-1] ==3 || a[xpos][ypos-1] ==4 || a[xpos][ypos-1] ==5 || a[xpos][ypos-1] ==1))     //left
            DFS(xpos, ypos-1, rem_len-1);

        if((ypos!=m-1) && (a[xpos][ypos+1] ==3 || a[xpos][ypos+1] ==6 || a[xpos][ypos+1] ==7 || a[xpos][ypos+1] ==1))   //right
            DFS(xpos, ypos+1, rem_len-1);

    }
    else if(a[xpos][ypos] == 2)
    {
        if((xpos!=0) && (a[xpos-1][ypos] ==1 || a[xpos-1][ypos] ==5 || a[xpos-1][ypos] ==6 || a[xpos-1][ypos] ==2))    //up
            DFS(xpos-1, ypos, rem_len-1);

        if((xpos!=n-1) && (a[xpos+1][ypos] ==1 || a[xpos+1][ypos] ==4 || a[xpos+1][ypos] ==7 || a[xpos+1][ypos] ==2))  //down
            DFS(xpos+1, ypos, rem_len-1);
    }
    else if(a[xpos][ypos] == 3)
    {
        if((ypos!=0)&& (a[xpos][ypos-1] ==1 || a[xpos][ypos-1] ==4 || a[xpos][ypos-1] ==5 || a[xpos][ypos-1] ==3))     //left
            DFS(xpos, ypos-1, rem_len-1);

        if((ypos!=m-1) && (a[xpos][ypos+1] ==1 || a[xpos][ypos+1] ==6 || a[xpos][ypos+1] ==7 || a[xpos][ypos+1] ==3))   //right
            DFS(xpos, ypos+1, rem_len-1);
    }
    else if(a[xpos][ypos] == 4)
    {
        if((xpos!=0) && (a[xpos-1][ypos] ==1 || a[xpos-1][ypos] ==2 || a[xpos-1][ypos] ==5 || a[xpos-1][ypos] ==6))    //up
            DFS(xpos-1, ypos, rem_len-1);

        if((ypos!=m-1) && (a[xpos][ypos+1] ==1 || a[xpos][ypos+1] ==3 || a[xpos][ypos+1] ==6 || a[xpos][ypos+1] ==7))   //right
            DFS(xpos, ypos+1, rem_len-1);
    }
    else if(a[xpos][ypos] == 5)
    {
        if((xpos!=n-1) && (a[xpos+1][ypos] =1 || a[xpos+1][ypos] ==2 || a[xpos+1][ypos] ==7 || a[xpos+1][ypos] ==4))  //down
            DFS(xpos+1, ypos, rem_len-1);

        if((ypos!=m-1) && (a[xpos][ypos+1] ==1 || a[xpos][ypos+1] ==3 || a[xpos][ypos+1] ==6 || a[xpos][ypos+1] ==7))   //right
            DFS(xpos, ypos+1, rem_len-1);
    }
    else if(a[xpos][ypos] == 6)
    {
        if((xpos!=n-1) && (a[xpos+1][ypos] ==1 || a[xpos+1][ypos] ==2 || a[xpos+1][ypos] ==7 || a[xpos+1][ypos] ==4))  //down
            DFS(xpos+1, ypos, rem_len-1);

        if((ypos!=0)&& (a[xpos][ypos-1] ==1 || a[xpos][ypos-1] ==3 || a[xpos][ypos-1] ==5 || a[xpos][ypos-1] ==4))     //left
            DFS(xpos, ypos-1, rem_len-1);
    }
    else if(a[xpos][ypos] == 7)
    {
        if((xpos!=0) && (a[xpos-1][ypos] ==1 || a[xpos-1][ypos] ==2 || a[xpos-1][ypos] ==5 || a[xpos-1][ypos] ==6))    //up
            DFS(xpos-1, ypos, rem_len-1);

        if((ypos!=0)&& (a[xpos][ypos-1] ==1 || a[xpos][ypos-1] ==3 || a[xpos][ypos-1] ==4 || a[xpos][ypos-1] ==5))     //left
            DFS(xpos, ypos-1, rem_len-1);
    }
}


int main() {
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    
    int t,i,j,k,x,y,l;
    cin>>t;
    while(t--){

       cin>>n>>m>>x>>y>>l;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }

        DFS(x,y,l);

        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(vis[i][j]==1){
                     count++;
                    vis[i][j]=0;
                }
            }
        }
        cout<<count<<endl;
    }
}
























































// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

struct node {
    bool right, left, top, bottom;
};

int n, m, r, c, l;
int adj[1001][1001];
bool visited[1001][1001];
node path[1001][1001];
int dist[1001][1001];

bool isValid (int x, int y) {
    if (x >=0 && x < n && y >=0 && y < m) return true;
    else return false;
}

void bfs (int sx, int sy) {
    queue < pair <int, int > > q;
    
    if (adj[sx][sy] != 0) {
        q.push(make_pair(sx,sy));
        visited[sx][sy] = true;
        dist[sx][sy] = 1;
        if (dist[sx][sy] == l) return;
    }
    
    while (!q.empty()) {
        pair < int, int > u = q.front();
        int ux = u.first;
        int uy = u.second;
        q.pop();

        if (adj[ux][uy] == 0) break;
        bool flag = false;

        //checking right
        int vx = ux + 0;
        int vy = uy + 1;
        if (isValid(vx, vy)) {
            if (path[ux][uy].right && path[vx][vy].left && !visited[vx][vy] && adj[vx][vy] != 0) {
                visited[vx][vy] = true;
                dist[vx][vy] = dist[ux][uy] + 1;
                if (dist[vx][vy] == l) flag = true;
                q.push(make_pair(vx, vy));
            }
        }
        //checking left 
        vx = ux + 0;
        vy = uy - 1;
        if (isValid(vx, vy)) {
            if (path[ux][uy].left && path[vx][vy].right && !visited[vx][vy] && adj[vx][vy] != 0) {
                visited[vx][vy] = true;
                dist[vx][vy] = dist[ux][uy] + 1;
                if (dist[vx][vy] == l) flag = true;
                q.push(make_pair(vx, vy));
            }
        }
        //checking top
        vx = ux - 1;
        vy = uy + 0;
        if (isValid(vx, vy)) {
            if (path[ux][uy].top && path[vx][vy].bottom && !visited[vx][vy] && adj[vx][vy] != 0) {
                visited[vx][vy] = true;
                dist[vx][vy] = dist[ux][uy] + 1;
                if (dist[vx][vy] == l) flag = true;
                q.push(make_pair(vx, vy));
            }
        }
        //checking bottom
        vx = ux + 1;
        vy = uy + 0;
        if (isValid(vx, vy)) {
            if (path[ux][uy].bottom && path[vx][vy].top && !visited[vx][vy] && adj[vx][vy] != 0) {
                visited[vx][vy] = true;
                dist[vx][vy] = dist[ux][uy] + 1;
                if (dist[vx][vy] == l) flag = true;
                q.push(make_pair(vx, vy));
            }
        }
        if (flag) break;
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;   cin >> test;
    while (test--) {
        cin >> n >> m >> r >> c >> l;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                visited[i][j] = false;
                dist[i][j] = 0;
                adj[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> adj[i][j];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (adj[i][j] == 1) {
                    path[i][j].right = true;
                    path[i][j].left = true;
                    path[i][j].top = true;
                    path[i][j].bottom = true;
                }
                if (adj[i][j] == 2) {
                    path[i][j].right = false;
                    path[i][j].left = false;
                    path[i][j].top = true;
                    path[i][j].bottom = true;
                }
                if (adj[i][j] == 3) {
                    path[i][j].right = true;
                    path[i][j].left = true;
                    path[i][j].top = false;
                    path[i][j].bottom = false;
                }
                if (adj[i][j] == 4) {
                    path[i][j].right = true;
                    path[i][j].left = false;
                    path[i][j].top = true;
                    path[i][j].bottom = false;
                }
                if (adj[i][j] == 5) {
                    path[i][j].right = true;
                    path[i][j].left = false;
                    path[i][j].top = false;
                    path[i][j].bottom = true;
                }
                if (adj[i][j] == 6) {
                    path[i][j].right = false;
                    path[i][j].left = true;
                    path[i][j].top = false;
                    path[i][j].bottom = true;
                }
                if (adj[i][j] == 7) {
                    path[i][j].right = false;
                    path[i][j].left = true;
                    path[i][j].top = true;
                    path[i][j].bottom = false;
                }
                if (adj[i][j] == 0) {
                    path[i][j].right = false;
                    path[i][j].left = false;
                    path[i][j].top = false;
                    path[i][j].bottom = false;
                }
            }
        }

        bfs (r, c);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // cout << visited[i][j] << " ";
                if (visited[i][j]) ans++;
            }
            // cout << endl;
        }

        cout << ans << endl;
    }
    return 0;
}

/*
Statement: 
Company S has developed an industrial endoscope available to explore inner part of the decrepit water pipes. It is possible to explore the inner part of the pipes putting the endoscope in a certain part of the pipe. The endoscope can be moved in the pipe only. Meanwhile, when the pipes are connected, if the length of the endoscope is long enough to explore, then it can inspect the connected pipes. However, we cannot observe every pipe because the length of the endoscope is limited.

When the map of the ground water pipe, the location where the endoscope to out in, and the length of the endoscope is given, calculate the number of pipe which are available to explore. Length of endoscope means the range upto which endoscope can explore. There are seven kind of pipes, and description for each pipe are shown below:

S.No	Pipe	Connected to
1		Up, Down, Left, Right
2		Up, Down
3		Left, Right
4		Up, Right
5		Down, Right
6		Down, Left
7		Up, Left
When the map of the groundwater pipe, the location where the endoscope to out in, and the length of the endoscope is given, calculate the number of the pipe which are available to explore. Length of endoscope means the range up to which endoscope can explore.

Input
In the first line, T, the number of total test cases are given. From the second line, T test cases are given. In the first line of each test case, N, the height of the map of the groundwater pipes, M, the width, R, the vertical location of the water pipe where to put in the endoscope, C, the horizontal location of it, and the length of the endoscope L are given. In the following N lines, information about the map of the groundwater pipe is given. Each line has M numbers. Each number (from 1 to 7) means the type of water pipe for that point. 0 means there is no water pipe buried in that place.

Output
Print the respective answer for T test cases in total for T lines. The answer is the number of water pipes which is available to observe using the endoscope.

Constraints
1≤ T ≤100

1≤ N, M ≤50

0≤ X < N

0≤ Y < M

1≤ L ≤ 20
*/

/*
Sample IO:
2 
5 6 2 1 3 
0 0 5 3 6 0 
0 0 2 0 2 0 
3 3 1 3 7 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
5 6 2 2 6 
3 0 0 0 0 3 
2 0 0 0 0 6 
1 3 1 1 3 1 
2 0 2 0 0 2 
0 0 4 3 1 1

O/p:
5 
15

*/
