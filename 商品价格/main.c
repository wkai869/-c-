#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,count,sum,c,d;
sum=0,a=1,count=0;
while(a==1)
{
    printf("�������%d����Ʒ�ļ۸�\n",++count);
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
printf("ѡ����%d����Ʒ��Ӧ��%dԪ,��Լ��%dԪ���˿͸���%dԪ",count,sum,d,c);
return 0;
}
