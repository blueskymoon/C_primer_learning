#include <stdio.h>
#include <string.h>
//a.把名字在双引号中打印出来
//b.在宽度为20个字符的字段内打印名字，并且整个字段在引号内。
//c.在宽度为20个字符的字段的有段打印名字，并且整个字段印在引号内。
//d.在比名字宽3个字符的字段内打印它。


int main(void)
{
    char name[30];
    int i;
    scanf("%s",name);
    i=strlen(name)+3;
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",i,name);
}
