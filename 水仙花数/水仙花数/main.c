#include <stdio.h>
#include "mymath.h"

int main()
{
    int a,n;
    printf("����һ����:\n");
    scanf("%d",&n);
a=flower(n);
if(a==0)
    printf("%d��ˮ�ɻ�����\n",n);
else printf("%d����ˮ�ɻ�����\n",n);
    return 0;
}
