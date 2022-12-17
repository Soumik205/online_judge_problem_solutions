#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll ns, nm, nl, nxl, nxxl;   cin >> ns >> nm >> nl >> nxl >> nxxl;

    ll st;  cin >> st;
    while (st--) {
        string temp;   cin >> temp;

        if (temp == "S") {
            if (ns > 0) {
                cout << "S" << endl;
                ns--;
            }
            else if (nm > 0) {
                cout << "M" << endl;
                nm--;
            }
            else if (nl > 0) {
                cout << "L" << endl;
                nl--;
            }
            else if (nxl > 0) {
                cout << "XL" << endl;
                nxl--;
            }
            else if (nxxl > 0) {
                cout << "XXL" << endl;
                nxxl--;
            }
        }
        else if (temp == "M") {
            if (nm > 0) {
                cout << "M" << endl;
                nm--;
            }
            else if (nl > 0) {
                cout << "L" << endl;
                nl--;
            }
            else if (ns > 0) {
                cout << "S" << endl;
                ns--;
            }
            else if (nxl > 0) {
                cout << "XL" << endl;
                nxl--;
            }
            else if (nxxl > 0) {
                cout << "XXL" << endl;
                nxxl--;
            }
        }
        else if(temp == "L") {
            if (nl > 0) {
                cout << "L" << endl;
                nl--;
            }
            else if (nxl > 0) {
                cout << "XL" << endl;
                nxl--;
            }
            else if (nm > 0) {
                cout << "M" << endl;
                nm--;
            }
            else if (nxxl > 0) {
                cout << "XXL" << endl;
                nxxl--;
            }
            else if (ns > 0) {
                cout << "S" << endl;
                ns--;
            }
        }
        else if (temp == "XL") {
            if (nxl > 0) {
                cout << "XL" << endl;
                nxl--;
            }
            else if (nxxl > 0) {
                cout << "XXL" << endl;
                nxxl--;
            }
            else if (nl > 0) {
                cout << "L" << endl;
                nl--;
            }
            else if (nm > 0) {
                cout << "M" << endl;
                nm--;
            }
            else if (ns > 0) {
                cout << "S" << endl;
                ns--;
            }
        }
        else if (temp == "XXL") {
            if (nxxl > 0) {
                cout << "XXL" << endl;
                nxxl--;
            }
            else if (nxl > 0) {
                cout << "XL" << endl;
                nxl--;
            }
            else if (nl > 0) {
                cout << "L" << endl;
                nl--;
            }
            else if (nm > 0) {
                cout << "M" << endl;
                nm--;
            }
            else if (ns > 0) {
                cout << "S" << endl;
                ns--;
            }
        }
    }
    return 0;
}
