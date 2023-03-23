/*

【例3.10】
改写例3.3程序，使之可以适用于任何大写字母。从键盘输入一个大写字母，在显示屏上显示对应的小写字母。

*/

//代码如下：


#include<stdio.h>
int main()
{
    printf("%c\n",getchar()+32);
    return 0;
}