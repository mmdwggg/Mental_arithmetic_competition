#include "list.h" 
/*��������ĳ��⺯��*/
/*��ѡ�����ָ����Լ��ַ�*/ 
void advancedTest()
{
    int len, i, score = 0;
    char c;
    printf("�������Ѷ�ϵ��: �����ִ��������������ֵĸ�����");
    scanf("%d", &len);
    while(len<2){
    	printf("��������ȷ���Ѷ�ϵ��������1��\n");
    	scanf("%d",&len);
	}
    getchar();
    printf("�������������");
    scanf("%c", &c);
    while(c!='+'&&c!='-'&&c!='*'&&c!='/'){
    	printf("��������ȷ���������\n");
    	c = getchar();
	}
    getchar();
    for (i = 0; i < 10; i++)
    {
        if (test2(len, c))
        {
            score += 10;
        }
    }
    printf("��ĵ÷���: %d", score);
    system("pause");
	system("cls");
}
