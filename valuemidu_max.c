#include "include/valuemidu_max.h"

double valuemidu_max(int n,int v2[],int w[],int W)//每次选剩下物品中单位重量下价值最大的物品的贪心算法
{
    int restvmmax,sum=W,restmoon3=W;
    double value;
     restvmmax=find_valuemidumax(n,v2,w);
    while(W>0)
    {
            W-=w[restvmmax];
            if(W>0)
                value+=1.0*v2[restvmmax];
            else
            value+=1.0*v2[restvmmax]*(restmoon3)/(1.0*w[restvmmax]);
       v2[restvmmax]=0  ;
       restvmmax=find_valuemidumax(n,v2,w);
       restmoon3=W;//标记剩下的空间
    }
printf("%.6lf\n",value);
}
