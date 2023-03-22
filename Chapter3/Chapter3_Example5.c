/*

【例3.5】
求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b^2-4ac>0。

【解题思路】
首先要知道求方程式的根的方法。由数学知识已知：如果b^2-4ac>=0，则一元二次方程有两个实根：
x1=[-b+√(b^2-4ac)]/2a， x2=[-b-√(b^2-4ac)]/2a
可以将上面的分式分为两项：
p=(-b)/2a， q=√(b^2-4ac)/2a
则:
x1=p+q, x2=p-q
有了这些式子，只要知道a,b,c的值，就能顺利地求出方程的两个根。
剩下的问题就是输入a,b,c的值和输出根的值了。需要用scanf函数输入a,b,c的值，用printf函数输出两个实根的值。

*/

//代码如下：

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,disc,x1,x2,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(disc)/(2*a);
    if(disc>=0)
    {
        x1=p+q;
        x2=p-q;
        printf("x1=%0.2f\nx2=%0.2f\n",x1,x2);  
    }
    else
    {
        printf("无解\n");
    }
    return 0;
}