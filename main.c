#include <stdio.h>
#include "include/valuemidu_max.h"
#include "include/find_valuemidumax.h"


//实现背包问题（可分割）的贪心算法程序

int main(void)
{
int w[100000];
int v2[100000];
int n,i,W,num;
printf("输入货车的最大装货重量W和商品个数n：\n");
scanf("%d %d",&W,&n);//输品的个数

  for(i=1;i<=n;i++)//输入各个物品的重量和价值
    {
printf("输入第%d个货物的重量和价值:\n",i);
      scanf("%d",&w[i]);
      scanf("%d",&v2[i]);
    }
printf("卡车能装最大价值为：\n");
       valuemidu_max(n, v2, w, W);

    return 0;
}
