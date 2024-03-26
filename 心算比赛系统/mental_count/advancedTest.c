#include "list.h" 
/*进阶运算的出题函数*/
/*可选择数字个数以及字符*/ 
void advancedTest()
{
    int len, i, score = 0;
    char c;
    printf("请输入难度系数: （数字代表参与运算的数字的个数）");
    scanf("%d", &len);
    while(len<2){
    	printf("请输入正确的难度系数（大于1）\n");
    	scanf("%d",&len);
	}
    getchar();
    printf("请输入运算符：");
    scanf("%c", &c);
    while(c!='+'&&c!='-'&&c!='*'&&c!='/'){
    	printf("请输入正确的运算符！\n");
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
    printf("你的得分是: %d", score);
    system("pause");
	system("cls");
}
