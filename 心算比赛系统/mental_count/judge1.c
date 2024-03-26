#include "list.h" 
/*ÅĞ¶Ï×Ö·ûÊÇ·ñºÏÊÊ*/ 
int judgeLetterOrNumber(char *str) 
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
/*ÅĞ¶Ï³¤¶ÈÊÇ·ñºÏÊÊ*/ 
int judgeLength(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i >= 8 && i <= 18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
