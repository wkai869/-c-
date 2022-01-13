#include <time.h>

void space50()
{
    printf("                                                  ");//菜单界面居中
}


int menu()//菜单界面
{
    int select;
    system("cls");
    space50();
    printf("      算数游戏\n");
    space50();
    printf("********************\n");
    space50();
    printf("[1]加法\n");
    space50();
    printf("[2]减法\n");
    space50();
    printf("[3]乘法\n");
    space50();
    printf("[4]除法\n");
    space50();
    printf("[0]退出\n");
    space50();
    printf("********************\n");
    printf("请输入选项[   ]\b\b\b");
    scanf("%d",&select);
    return select;
}


int addtion(int a,int b)//加法模块
{
    int c;
    c=a+b;
    return c;
}
void procAddtion()
{
    {
        int chance;
        int ansCounter=0;
        int flag;
        int i,a,b,c,sum;
        int s;
        s=question();
        chance=prochance();
        for(i=1;i<=s;i++)
        {
            ansCounter=0;
            flag=0;

           srand((unsigned)time(NULL));
           a=rand()%100;
           b=rand()%100;
            c=addtion(a,b);
            while(ansCounter<chance&&flag==0)
            {
                printf("%d+%d=",a,b);
                scanf("%d",&sum);
                ansCounter++;
                if(sum==c)
                {
                    printblank();
                    flag=1;
                    break;
                }
                else
                {
                    if(ansCounter<chance)
                    {
                        if(sum<c)
                    printf("结果小了。\n");
                    else
                    printf("结果大了。\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("我们只以坚持不断的努力，才能够抗拒这不可战胜的灰心失望。\n正确的答案是；%d+%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int subtraction(int a,int b)//减法模块
{
    int c;
    c=a-b;
    return c;
}

void prosubtraction()
{
    {
        int chance;
        int ansCounter=0;
        int flag;
        int i,a,b,c,difference,s,temp;
        s=question();
        chance=prochance();
        for(i=1;i<=s;i++)
        {
            ansCounter=0;
            flag=0;

           srand((unsigned)time(NULL));
           a=rand()%100;
           b=rand()%100;
           if(a<b)
           {
            temp=a;
            a=b;
            b=temp;
           }
            c=subtraction(a,b);
            while(ansCounter<chance&&flag==0)
            {
                printf("%d-%d=",a,b);
                scanf("%d",&difference);
                ansCounter++;
                if(difference==c)
                {
                    printblank();
                    flag=1;
                    break;
                }
                else
                {
                    if(ansCounter<chance)
                    {
                        if(difference<c)
                    printf("结果小了。\n");
                    else
                    printf("结果大了。\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("我们只以坚持不断的努力，才能够抗拒这不可战胜的灰心失望。\n正确的答案是；%d-%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int multiplication(int a,int b)//乘法模块
{
    int c;
    c=a*b;
    return c;
}

void promultiplication()
{
    {
        int chance;
        int ansCounter=0;
        int flag;
        int i,a,b,c,y;
        int s;
        s=question();
        chance=prochance();
        for(i=1;i<=s;i++)
        {
            ansCounter=0;
            flag=0;

           srand((unsigned)time(NULL));
           a=rand()%100;
           b=rand()%100;
            c=multiplication(a,b);
            while(ansCounter<chance&&flag==0)
            {
                printf("%d*%d=",a,b);
                scanf("%d",&y);
                ansCounter++;
                if(y==c)
                {
                   printblank();
                    flag=1;
                    break;
                }
                else
                {
                    if(ansCounter<chance)
                    {
                        if(y<c)
                    printf("结果小了。\n");
                    else
                    printf("结果大了。\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("我们只以坚持不断的努力，才能够抗拒这不可战胜的灰心失望。\n正确的答案是；%d*%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int division(int a,int b)//除法模块
{
    int c;
    c=a/b;
    return c;
}


void prodivision()
{
    {
        int chance;
        int ansCounter=0;
        int flag;
        int i,a,b,c,quot,s,temp;
        s=question();
        chance=prochance();
        for(i=1;i<=s;i++)
        {
            ansCounter=0;
            flag=0;

           srand((unsigned)time(NULL));
           a=rand()%100+1;
           b=rand()%100+1;
           if(a<b)
           {
            temp=a;
            a=b;
            b=temp;
           }
            c=division(a,b);
            while(ansCounter<chance&&flag==0)
            {
                printf("%d/%d=",a,b);
                scanf("%d",&quot);
                ansCounter++;
                if(quot==c)
                {
                    printblank();
                    flag=1;
                    break;
                }
                else
                {
                    if(ansCounter<chance)
                    {
                        if(quot<c)
                    printf("结果小了。\n");
                    else
                    printf("结果大了。\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("我们只以坚持不断的努力，才能够抗拒这不可战胜的灰心失望。\n正确的答案是；%d/%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int question()//设置题量大小
{
    int s;
    printf("请设置题量大小：");
    scanf("%d",&s);
    return s;
}

int prochance()//设置答题机会
{
    int chance;
    printf("请设置答题机会：");
    scanf("%d",&chance);
    return chance;
}

void printblank()//随机输出表扬信息
{
    int k;
    srand(time(NULL));
   k=rand()%5+1;
    switch(k)
    {
    case 1:printf("厉害!宁欺白须公，莫欺少年穷。\n");
    break;
    case 2:printf("奥力给！江山代有才人出，各领风骚数百年。\n");
    break;
    case 3:printf("真挺好！宝剑锋从磨砺出，梅花香自苦寒来。\n");
    break;
    case 4:printf("加油，少年！春风得意马蹄疾，一日看尽长安花。\n");
    break;
    case 5:printf("真厉害！莫愁前路无知己，天下谁人不知君。\n");
    }
}

