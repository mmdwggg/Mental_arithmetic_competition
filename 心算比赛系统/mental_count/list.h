#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
/*����ͷ�ļ��Լ������ṹ�壬�Դﵽ���ļ�ֱ�ӵ��ú�����Ŀ��*/ 
/*������ϵ���Ϊ�ǳ� ���� ���� �Ƿ��в����ʸ� �Ƿ���� �Ƿ���̭*/ 
struct individual{
	char account[20];
	char password[20];
	int score;
	char qualify[20];
	char promotion[20];
	char eliminate[20];
};
struct individuallist{
	struct individual data;
	struct  individuallist *next;
};
struct team{
	char name[20];
	char province[20];
	char qualify;
	int p1;
	int p2;
	int p3;
	int score;
};
struct teamlist{
	struct team data;
	struct  teamlist *next;
};
struct teamarray{
	char name[20];
	int score;
};
