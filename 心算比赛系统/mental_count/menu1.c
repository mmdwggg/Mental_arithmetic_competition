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
    textColor(8); printf("\t                                     �X�T�T�T�T�T�T�T�T�T�T�T�T�j�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
    textColor(1); printf("\t                                     �c                         �f\n");
    textColor(2); printf("\t                                     �c         ��ӭ����        �f\n");
    textColor(3); printf("\t                                     �c          BoYoo          �f\n");
    textColor(4); printf("\t                                     �c ���㾺��/��ϰһ�廯ϵͳ �f\n");
    textColor(6); printf("\t                                     �c      ��ã�Сѧ����     �f\n");
    textColor(6); printf("\t                                     �c                         �f\n");
    textColor(7); printf("\t                                     �^�T�T�T�T�T�T�T�T�T�T�T�T�m�T�T�T�T�T�T�T�T�T�T�T�T�a\n\n");
    system("pause");
    system("cls");
    menu_2Account();
    return 0; 
}
