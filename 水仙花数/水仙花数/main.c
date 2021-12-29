#include <stdio.h>
#include "mymath.h"

int main()
{
    int a,n;
    printf("输入一个数:\n");
    scanf("%d",&n);
a=flower(n);
if(a==0)
    printf("%d是水仙花数。\n",n);
else printf("%d不是水仙花数。\n",n);
    return 0;
}
