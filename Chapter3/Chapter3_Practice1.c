/*

【习题1】
假如我国国民生产总值的年增长率为7%,计算10年后我国国民生产总值与现在相比增长多少百分比。
p=(1+r)^n
计算公式为r为年增长率,n为年数,p为与现在相比的倍数。

*/

//代码如下：

#include<stdio.h>
#include<math.h>
int main()
{
   double r=0.07,p;
   int n=10;
   p=pow(1+r,n);
   printf("%.2f\n",p);
   return 0;
   
}