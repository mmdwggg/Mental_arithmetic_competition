#include "list.h" 
/*�������ĳ��⺯�����ַ���Ҫ��������֣��õ���srand����*/ 
/*srand�������һ����*/ 
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
        printf("��ķ����ǣ�%d\n", score);
        if (score < 60)
            printf("�÷�С��60�֣������²��ԣ�\n");
    } while (score < 60);
    printf("��ϲ����Գɼ��ϸ�\n");
    system("pause");
    system("cls");
    return;
}
