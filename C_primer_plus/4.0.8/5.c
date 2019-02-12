#include <stdio.h>
#include <string.h>
//1.输入用户名称
//2.输入用户姓氏
//3.打印输入的名字
//4.在下一行打印名字中的字母个数
//5.把字母个数与相应名字的结尾对齐

int main(void)
{
    char name[30];
    char xing[30];
    int i,j;
    scanf("%s %s",name,xing);
    i = strlen(name);
    j = strlen(xing);
    printf("%s %s\n",name,xing);
    printf("%*d %*d\n",i,i,j,j);
    printf("%s %s\n",name,xing);

    printf("%-*d %-*d\n",i,i,j,j);
    return 0;
}
