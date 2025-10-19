//猜数字游戏
#include<stdio.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>
void menu()
{
    printf("************************\n");
    printf("*    1.Play    2.Exit  *\n");
    printf("************************\n");
}
void game()
{
    //1.生成随机数
    int ret = 0;
    int guess = 0;
    int i = 0;
    srand(time(NULL));
	int random_num = rand()%100 +1;//生成100以内的随机数
    printf("随机数: %d\n", random_num);
    //2.猜一个数字
    for(i=1; i<=11; i++)
    {
        printf("猜数字：");
        scanf("%d", &guess);
        if (random_num > guess)
        {
            printf("猜小了\n");
        }
        else if (random_num < guess)
        {
            printf("猜大了\n");
        }
        else if (random_num== guess)
        {
            printf("猜对了\n");
            break;
        }
    }
    printf("猜的次数%d\n", i);
}
int main()
{
    int input = 0;
//运用时间戳来生成随机数的起点
    do
    {
        menu();
        printf("请选择=");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (input);
	return 0;
}
