#include "list.h" 
/*混合运算的出题函数，字符需要随机而出现，用到了srand函数*/ 
/*srand随机给出一个数*/ 
char randomCharacter()
{
    srand((unsigned)time(NULL));
    if ((rand() % 4 + 1) == 1)
        return '+';
    else if ((rand() % 4 + 1) == 2)
        return '-';
    else if ((rand() % 4 + 1) == 3)
        return '*';
    else
        return '/';
}
void mixingTest()
{
    int i, a,score = 0;
    char q;
    do
    {	
    	score = 0; 
        for (i = 0; i < 2; i++)
        {
            q=randomCharacter();
            if (test(2, q))
                score += 5;
        }
        for (i = 0; i < 4; i++)
        {
            q=randomCharacter();
            if (test(3, q))
                score += 5;
        }
        for (i = 0; i < 6; i++)
        {
            q=randomCharacter();
            if (test(4, q))
                score += 5;
        }
        for (i = 0; i < 8; i++)
        {
            q=randomCharacter();
            srand((unsigned)time(NULL));
            a = rand() % 3 + 2;
            srand((unsigned)time(NULL));
            if (test(a, q))
                score += 5;
        }
        printf("你的分数是：%d\n", score);
        if (score < 60)
            printf("得分小于60分，请重新测试！\n");
    } while (score < 60);
    printf("恭喜你测试成绩合格！\n");
    system("pause");
    system("cls");
    return;
}
