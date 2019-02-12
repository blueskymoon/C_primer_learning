#include <stdio.h>
/*使用两个函数，1.void praise(void)  2.void repetition(void)
 * 第一个将夸奖信息输出一次，第二个将最后一行输出一次*/
void praise(void);
void repetition(void);
int main(void)
{
    praise();
    repetition();
    return 0;
}
void praise(void)
{
    int i;
    for(i=0;i<=2;i++)
    printf("For he's a jolly good fellow!\n");
}
void repetition(void)
{
    printf("Which nobody can deny!\n");
}
