#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    double a, b, c;

    while (cin >> a >> b >> c)
    {
        //incircle
        double s = (a + b + c) / 2.0;
        double blue = sqrt(s * (s - a) * (s - b) * (s - c));
        double something = blue;
        double r_in = blue / s;
        double red = pi * (r_in * r_in);
        blue -= red;

        //outcircle
        double yel = (a * b * c) / (4.0 * something);
        double yellow = pi * yel * yel;
        yellow -= blue;
        yellow -= red;

        printf ("%.4lf %.4lf %.4lf\n", yellow, blue, red);
    }
    return 0;
}

//13.6350  2.8584  3.1416