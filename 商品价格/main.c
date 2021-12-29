#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,count,sum,c,d;
sum=0,a=1,count=0;
while(a==1)
{
    printf("请输入第%d件商品的价格：\n",++count);
    scanf("%d",&b);
    if(b==0) a=3;
    else sum=sum+b;
}
if(sum<200) c=sum*0.9;
else if(sum<500) c=sum*0.8;
else if(sum<1000) c=sum*0.7;
else c=sum*0.65;
d=sum-c;
count=count-1;
printf("选购了%d件商品，应付%d元,节约了%d元，顾客付款%d元",count,sum,d,c);
return 0;
}
