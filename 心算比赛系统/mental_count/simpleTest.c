#include "list.h" 
/*简单运算的出题函数*/ 
void simpleTest()
{
    int i, score = 0;
    int a;
    char q;
    printf("请输入运算符号：");
    q = getchar();
    while(q!='+'&&q!='-'&&q!='*'&&q!='/'){
    	printf("请输入正确的运算符！\n");
    	q = getchar();
	} 
    getchar();
    system("pause");
    system("cls");
    do
    {
    	score=0;
        for (i = 0; i < 2; i++)
        {
            if (test(2, q))
                score += 5;
        }
        for (i = 0; i < 4; i++)
        {
            if (test(3, q))
                score += 5;
        }
        for (i = 0; i < 6; i++)
        {
            if (test(4, q))
                score += 5;
        }
        for (i = 0; i < 8; i++)
        {
            srand((unsigned)time(NULL));
            a = rand() % 3 + 2;
            srand((unsigned)time(NULL));
            if (test(a, q))
                score += 5;
        }
        printf("你的分数是：%d\n", score);
        if (score < 60)
            printf(" (ノへ￣、)得分小于60分，请重新测试！\n"); 
    } while (score < 60);
    printf("恭喜你测试成绩合格！\n");
    system("pause");
    system("cls");
    return;
}
