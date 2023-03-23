/*

【习题3】
购房从银行贷了一笔款d,准备每月还款额为p,月利率为r,计算多少月能还清。
设d为300000元,p为6000元,r为1%。
对求得的月份取小数点后一位,对第2位按四舍五人处理。
提示:计算还清月数m的公式如下:
m=[logp-log(p-d*r)]/log(1+r)
即,
m=log[p/(p-d*r)]/log(1+r)

C的库函数中有求对数的函数log10,是求以10为底的对数,log(p)表示logp。

*/

//代码如下：

#include<stdio.h>
#include<math.h>
int main()
{
   double r=0.01,m;
   int d=300000,p=6000;
   m=(log(p)-log(p-d*r))/log(1+r);
   printf("%.0f\n",m);
   return 0;
}