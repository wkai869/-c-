#include <time.h>

void space50()
{
    printf("                                                  ");//�˵��������
}


int menu()//�˵�����
{
    int select;
    system("cls");
    space50();
    printf("      ������Ϸ\n");
    space50();
    printf("********************\n");
    space50();
    printf("[1]�ӷ�\n");
    space50();
    printf("[2]����\n");
    space50();
    printf("[3]�˷�\n");
    space50();
    printf("[4]����\n");
    space50();
    printf("[0]�˳�\n");
    space50();
    printf("********************\n");
    printf("������ѡ��[   ]\b\b\b");
    scanf("%d",&select);
    return select;
}


int addtion(int a,int b)//�ӷ�ģ��
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
                    printf("���С�ˡ�\n");
                    else
                    printf("������ˡ�\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("����ֻ�Լ�ֲ��ϵ�Ŭ�������ܹ������ⲻ��սʤ�Ļ���ʧ����\n��ȷ�Ĵ��ǣ�%d+%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int subtraction(int a,int b)//����ģ��
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
                    printf("���С�ˡ�\n");
                    else
                    printf("������ˡ�\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("����ֻ�Լ�ֲ��ϵ�Ŭ�������ܹ������ⲻ��սʤ�Ļ���ʧ����\n��ȷ�Ĵ��ǣ�%d-%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int multiplication(int a,int b)//�˷�ģ��
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
                    printf("���С�ˡ�\n");
                    else
                    printf("������ˡ�\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("����ֻ�Լ�ֲ��ϵ�Ŭ�������ܹ������ⲻ��սʤ�Ļ���ʧ����\n��ȷ�Ĵ��ǣ�%d*%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int division(int a,int b)//����ģ��
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
                    printf("���С�ˡ�\n");
                    else
                    printf("������ˡ�\n");
                    }
                }
            }
            if(flag==0)
                    {
                       printf("����ֻ�Լ�ֲ��ϵ�Ŭ�������ܹ������ⲻ��սʤ�Ļ���ʧ����\n��ȷ�Ĵ��ǣ�%d/%d=%d\n",a,b,c);
                    }
        }

    }
    system("pause");
}


int question()//����������С
{
    int s;
    printf("������������С��");
    scanf("%d",&s);
    return s;
}

int prochance()//���ô������
{
    int chance;
    printf("�����ô�����᣺");
    scanf("%d",&chance);
    return chance;
}

void printblank()//������������Ϣ
{
    int k;
    srand(time(NULL));
   k=rand()%5+1;
    switch(k)
    {
    case 1:printf("����!���۰��빫��Ī�������\n");
    break;
    case 2:printf("����������ɽ���в��˳��������ɧ�����ꡣ\n");
    break;
    case 3:printf("��ͦ�ã��������ĥ�³���÷�����Կຮ����\n");
    break;
    case 4:printf("���ͣ����꣡����������㼲��һ�տ�����������\n");
    break;
    case 5:printf("��������Ī��ǰ·��֪��������˭�˲�֪����\n");
    }
}

