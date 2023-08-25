#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n;
int arr[15];
bool visited[15];
int ans = -1;

void solve (int count, int sum) {
    if (count == n) {
        ans = max (ans, sum);
        return;
    }

    int temp = sum;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            bool isLeft = false, isRight = false;
            int leftVal = 1, rightVal = 1; // ei duitar value 1 not zero. karon multiply e ans zero hoye jabe naile.

            for (int j = i - 1; j >= 0; j--) {
                if (!visited[j]) {
                    isLeft = true;
                    leftVal = arr[j];
                    break;
                }
            }
            for (int j = i + 1; j < n; j++) {
                if (!visited[j]) {
                    isRight = true;
                    rightVal = arr[j];
                    break;
                }
            }
            if (!isLeft && !isRight) sum += arr[i];
            else sum += leftVal * rightVal;

            solve (count + 1, sum); // don't forget this xD
            visited[i] = false; // also don't forget this
            sum = temp;
        }
    }
    return;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solve (0, 0);
    cout << ans << endl;
}
