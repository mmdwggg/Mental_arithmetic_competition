#include "list.h" 
#include"menu2Account.c"
void menu_2Account();
void textColor(const unsigned short color)
{
    if(color>=0 && color<=15)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    textColor(8); printf("\t                                     ╔════════════╦════════════╗\n");
    textColor(1); printf("\t                                     ╟                         ╢\n");
    textColor(2); printf("\t                                     ╟         欢迎进入        ╢\n");
    textColor(3); printf("\t                                     ╟          BoYoo          ╢\n");
    textColor(4); printf("\t                                     ╟ 心算竞赛/练习一体化系统 ╢\n");
    textColor(6); printf("\t                                     ╟      你好，小学生！     ╢\n");
    textColor(6); printf("\t                                     ╟                         ╢\n");
    textColor(7); printf("\t                                     ╚════════════╩════════════╝\n\n");
    system("pause");
    system("cls");
    menu_2Account();
    return 0; 
}
