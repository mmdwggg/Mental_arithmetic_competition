#include "list.h" 
/*������ĳ��⺯��*/ 
void simpleTest()
{
    int i, score = 0;
    int a;
    char q;
    printf("������������ţ�");
    q = getchar();
    while(q!='+'&&q!='-'&&q!='*'&&q!='/'){
    	printf("��������ȷ���������\n");
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
        printf("��ķ����ǣ�%d\n", score);
        if (score < 60)
            printf(" (�Τأ���)�÷�С��60�֣������²��ԣ�\n"); 
    } while (score < 60);
    printf("��ϲ����Գɼ��ϸ�\n");
    system("pause");
    system("cls");
    return;
}
