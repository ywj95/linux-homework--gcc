#include "include/find_valuemidumax.h"

int find_valuemidumax(int n,int v2[],int w[])
{
    int i,k=1;
    double max;
    max=1.0*v2[1]/w[1];
     for(i=2;i<=n;i++)
     {if(max<(1.0*v2[i]/w[i]))
           {
            max=1.0*v2[i]/w[i];
            k=i;
           }
     }
     return k;
}

