#include "list.h" 
int plus(int a, int b)
{
    printf("+ %d ", b);
    return (a + b);
}
int subtract(int a, int b)
{
    printf("- %d ", b);
    return (a - b);
}
int multiply(int a, int b)
{
    printf("* %d ", b);
    return (a * b);
}
int division(int a, int b)
{
    printf("/ %d ", b);
    return (a / b);
}
int test2(int length, char c) 
{                            
    int a, b, result,i;
    srand((unsigned int)time(NULL));
    a = (rand() % (10000 - 10)) + 10;
    printf("%d", a);
    for (i = 1; i < length; i++)
    {
        switch (c)
        {
        case '+':
        {
            b = (rand() % (10000 - 10)) + 10;
            a = plus(a, b);
            break;
        }
        case '-':
        {
            b = (rand() % (a - 10)) + 10;
            a = subtract(a, b);
            break;
        }
        case '*':
        {
            b = (rand() % (10000 - 10)) + 10;
            a = multiply(a,b);
            break;
        }
        case '/':
        {
            b = (rand() % (a - 10)) + 1;
            while (a % b != 0){
            b = (rand() % (a - 10)) + 1;	
			}
            a = division(a,b);
        }
        }
    }
    printf("=");
    scanf("%d", &result);
    getchar();
    srand((unsigned int)time(NULL));
    if (result == a)
    {
        printf("right\n");
        return 1;
    }
    else
    {
        printf("wrong,the answer is %d\n", a);
        return 0;
    }
}
