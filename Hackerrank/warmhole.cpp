#include <iostream>
#include <climits>
using namespace std;


const int mx = 35;
int matrix[mx][5];
int visited[mx];

int n;  
int temp = 0;
int ans = INT_MAX;

int dist (int x1, int y1, int x2, int y2) {
    return (abs(x1 - x2) + abs(y1 - y2));
}

void warmhole (int sx, int sy, int dx, int dy, int cost) {
    ans = min (ans, (dist(sx, sy, dx, dy)) + cost);

    for (int i = 0; i < n; i++) {   
        if (!visited[i]) {
            visited[i] = 1;

            // choosing the lower end. To enter from the starting of the warmhole
            temp = dist (sx, sy, matrix[i][0], matrix[i][1]) + matrix[i][4] + cost;
            warmhole (matrix[i][2], matrix[i][3], dx, dy, temp);

            // choosing the upper end. To eneter from the ending of the warmhole/
            temp = dist (sx, sy, matrix[i][2], matrix[i][3]) + matrix[i][4] + cost;
            warmhole (matrix[i][0], matrix[i][1], dx, dy, temp);

            visited[i] = 0;
        }
    }
}



int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;   cin >> test;
    while (test--) {
        cin >> n;
        int sx, sy, dx, dy;     cin >> sx >> sy >> dx >> dy;

        for (int i = 0; i < n; i++) {
            visited[i] = 0;
            for (int j = 0; j < 5; j++) {
                cin >> matrix[i][j];
            }
        }

        ans = INT_MAX; // clearing ans value for every text case
        warmhole (sx, sy, dx, dy, 0); // the value of initial index is zero because no warmhole

        cout << ans << endl;
    }
    return 0;
}

/*
There is a source (S) and destination (D) and a spacecraft has to go from S to D. 
There are N number of wormholes in between which has following properties:

Each wormhole has an entry and an exit. Each wormhole is bi-directional i.e. one can enter and exit from any of the ends. 
The time to cross the wormhole is given and the space craft may or may not use the wormhole to reach D. 
The cost to travel outside wormhole between two points (x1, y1) and (x2, y2) is given by a formula |x1 - x2| + |y1 - y2|
where, (x1, y1) and (x2, y2) are the co-ordinates of two points. 
The co-ordinates of S and D are given and we have to find the minimum cost to reach D from S. 
The main problem here is to minimum cost to reach spaceship from source to destination co-ordinate using any number of warm-hole. 
It is ok if you wont use any warmhole.

Note: It’s not mandatory to consider all the wormholes

Input Format

First line contains t, number of test cases

There are N number of warmholes each warmhole has 5 values. 
First 2 values are starting co-ordinate of warmhole and after that value no. 3 and 4 represents ending co-ordinate of warmhole
 and last 5th value is represents cost to pass through this warmhole.

Line 1 contains value of N. Line 2 Conatins Source and Destination coordinate. Next N lines contain the warmhole information.

Constraints

1 < t < 10 1 < N < 6 -1 < x < 101 -1 < y < 101 0 < cost < 101

Output Format

Output a single integer (minimum cost)


Sample Input 0
1
3
0 0 100 100
1 2 120 120 16
2 5 120 100 21
6 8 150 180 16

Sample Output 0
48
*/
