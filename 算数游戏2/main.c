#include <stdio.h>
#include <stdlib.h>
#include "wodemath.h"
int main()
{
    int select;//菜单选项值
    int loop=1;
    while(loop)
    {
        select=menu();//显示游戏程序
        switch(select)
        {
            case 1:      //加法游戏
            procAddtion();
            break;
            case 2:      //减法游戏
            prosubtraction();
            break;
            case 3:      //乘法游戏
            promultiplication();
            break;
            case 4:     //除法游戏
            prodivision();
            break;
            default:      //退出程序
                printf("谢谢使用！\n");
                loop=0;
        }
    }
    return 0;
}
