//��������Ϸ
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
    //1.���������
    int ret = 0;
    int guess = 0;
    int i = 0;
    srand(time(NULL));
	int random_num = rand()%100 +1;//����100���ڵ������
    printf("�����: %d\n", random_num);
    //2.��һ������
    for(i=1; i<=11; i++)
    {
        printf("�����֣�");
        scanf("%d", &guess);
        if (random_num > guess)
        {
            printf("��С��\n");
        }
        else if (random_num < guess)
        {
            printf("�´���\n");
        }
        else if (random_num== guess)
        {
            printf("�¶���\n");
            break;
        }
    }
    printf("�µĴ���%d\n", i);
}
int main()
{
    int input = 0;
//����ʱ�������������������
    do
    {
        menu();
        printf("��ѡ��=");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 2:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("�������\n");
            break;
        }
    } while (input);
	return 0;
}
