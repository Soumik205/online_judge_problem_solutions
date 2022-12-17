/*
        Created By Soumik Ghosh!
        Department of Computer Science & Engineering.
        Chittagong University of Engineering & Technology!

*/




#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    double ab;
    double ac;
    double bc;
    double ratio;
    double ad;
    scanf("%d", &test);

    for(int i = 0; i < test; i++)
    {
        scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &ratio);

        ad = ab / sqrt( 1 + ( 1 / ratio));

        printf("Case %d: %lf\n", i + 1, ad);
    }

    return 0;

}
