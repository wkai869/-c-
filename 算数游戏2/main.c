#include <stdio.h>
#include <stdlib.h>
#include "wodemath.h"
int main()
{
    int select;//�˵�ѡ��ֵ
    int loop=1;
    while(loop)
    {
        select=menu();//��ʾ��Ϸ����
        switch(select)
        {
            case 1:      //�ӷ���Ϸ
            procAddtion();
            break;
            case 2:      //������Ϸ
            prosubtraction();
            break;
            case 3:      //�˷���Ϸ
            promultiplication();
            break;
            case 4:     //������Ϸ
            prodivision();
            break;
            default:      //�˳�����
                printf("ллʹ�ã�\n");
                loop=0;
        }
    }
    return 0;
}
