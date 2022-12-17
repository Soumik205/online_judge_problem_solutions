#include <bits/stdc++.h>

using namespace std;

void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
} 

int main()
{
    int test;   cin >> test;
    int t = 0;

    while (test--)
    {
        int n;  cin >> n;
        int m;  cin >> m;
        char c;
        int temp;
        int temp1;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> c;

            temp = 0;

            if (c == 'S') {
                cin >> temp;

                for (int j = 0; j < n; j++) {
                    arr[j] += temp;
                }
            }
            else if (c == 'M') {
                cin >> temp;

                for (int j = 0; j < n; j++) {
                    arr[j] *= temp;
                }
            }
            else if (c == 'D') {
                cin >> temp;

                for (int j = 0; j < n; j++) {
                    arr[j] /= temp;
                }
            }
            else if (c == 'R') {
                rvereseArray (arr, 0, n - 1); 
            }
            else if (c == 'P') {
                cin >> temp;
                cin >> temp1;

                int temp3 = 0;

                temp3 = arr[temp];
                arr[temp] = arr[temp1];
                arr[temp1] = temp3;
            }
        }

        printf ("Case %d:\n", ++t);

        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << arr[i];
            }
            else {
                cout << arr[i] << " " ;
            }
        }
        printf ("\n");
    }

    return 0;
}
    