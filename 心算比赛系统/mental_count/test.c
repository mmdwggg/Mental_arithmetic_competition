#include "list.h"
int test(int length, char c)
{
    int a, b, userAnswers;
    srand((unsigned)time(NULL));
    a = rand() % ((int)(pow(10, length) - pow(10, length - 1))) + (int)(pow(10, length - 1));
    b = rand() % ((int)(pow(10, length) - pow(10, length - 1))) + (int)(pow(10, length - 1));
        switch (c)
        {
        case ('+'):
        {
            printf("%d + %d = ", a, b);
            while (scanf("%d", &userAnswers) == 0)
            {
                printf("请输入整数：");
                getchar();
            }
            getchar();
            if (userAnswers == a + b)
            {
                printf("right\n");
                return 1;
            }
            else
            {	printf("error\n");
                return 0;
            }
        }
        case ('-'):
        {
            if (a < b)
            {
                swap(&a, &b);
            }
            printf("%d - %d = ", a, b);
            while (scanf("%d", &userAnswers) == 0)
            {
                printf("请输入整数：");
                getchar();
            }
            getchar();
            if (userAnswers == a - b)
            {
                printf("right\n");
                return 1;
            }
            else
            {	printf("error\n");
                return 0;
            }
        }
        case ('*'):
        {
            printf("%d * %d = ", a, b);
            while (scanf("%d", &userAnswers) == 0)
            {
                printf("请输入整数：");
                getchar();
            }
            getchar();
            if (userAnswers == a * b)
            {
                printf("right\n");
                return 1;
            }
            else
            {	printf("error\n");
                return 0;
            }
        }
        case ('/'):
        {
            while (a % b != 0)
            {
                a = rand() % ((int)(pow(10, length) - pow(10, length - 1))) + (int)(pow(10, length - 1));
                b = rand() % (a - 1) + 1;
            }
            printf("%d / %d = ", a, b);
            while (scanf("%d", &userAnswers) == 0)
            {
                printf("请输入整数：");
                getchar();
            };
            getchar();
            if (userAnswers == a / b)
            {
                printf("right\n");
                return 1;
            }
            else
            {	printf("error\n");
                return 0;
            }
        }
        }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
