/*

【例3.9】
从键盘输入BOY3个字符，然后把它们输出到屏幕。

【解题思路】
用3个getchar函数先后从键盘向计算机输入BOY3个字符，然后用putchar函数输出。

*/

//代码如下：

#include<stdio.h>
int main()
{
    putchar(getchar());
    putchar(getchar());
    putchar(getchar());
    putchar('\n');
    return 0;
}