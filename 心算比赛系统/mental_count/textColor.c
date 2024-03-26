#include<stdio.h>
#include<Windows.h>

void textColor(const unsigned short color)
{
    if(color>=0 && color<=15)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}