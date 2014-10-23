#include "urlib.h"
int counttrees(int n)
{
    int v[n],k;
    v[0] = 1;
    for (k = 0; k < n; ++k)
        v[k+1] = v[k]*2*(2*k+1)/(k+2);

    return v[n];
}
