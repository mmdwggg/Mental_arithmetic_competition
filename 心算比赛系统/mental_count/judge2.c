#include "list.h" 
int judge(char *str) 
{
	if (judgeLetterOrNumber(str) && judgeLength(str))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
