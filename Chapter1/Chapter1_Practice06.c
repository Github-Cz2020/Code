#include<stdio.h>
int main()
{
    int max(int x,int y,int z);
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    
    d=max(a,b,c);
    printf("max=%d\n",d);
    return 0;
}

int max(int x,int y,int z)
{
    int e;
    if(x>y)e=x;
    else e=y;
    if(e>z)e=e;
    else e=z;
    return(e);
}
