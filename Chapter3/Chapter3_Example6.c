/*

【例3.6】
用%f输出实数，只能得到6位小数。

*/

//代码如下:

#include<stdio.h>
int main()
{
    double a = 1.0;
    printf("%.15f\n",a/3);
    return 0;
}