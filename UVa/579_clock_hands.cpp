/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    double hour;
    double min;
    double hour_angle;
    double min_angle;
    double angle;

    while(1)
    {
        scanf("%lf:%lf", &hour, &min);

        if(hour == 0 && min == 00) return 0;

        hour_angle = hour * 30 + (30 * min / 60);
        min_angle = min * 6;

        if(hour_angle > min_angle)
        {
            angle = hour_angle - min_angle;
        }
        else if(hour_angle < min_angle)
        {
            angle = min_angle - hour_angle;
        }
        else angle = 0;

        if(angle == 360 || angle == 0) printf("0.000\n");
        else if(angle > 180) printf("%.3lf\n", 360 - angle);
        else printf("%.3lf\n", angle);
    }

}
