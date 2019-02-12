#include <stdio.h>
/*创建一个toes的整数变量，让程序把toes设置为10，再让程序计算两个toes的和以及toes的平方，程序应输出所有的3个值，并分别标识它们*/

int main(void)
{
    int toes = 10;
    int add = 0,sq = 0;
    add = toes + toes;   //求和
    sq = toes * toes;   //平方square
    printf("toes的值%d\n 求和所得%d\n 平方sq=%d",toes,add,sq);
    return 0;

}
