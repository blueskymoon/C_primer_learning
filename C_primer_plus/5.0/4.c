#include <stdio.h>
//棋盘方麦粒计算
//书本在11行至14行之间有问题,整体结果影响不大
#define SQUARES 64  //棋盘上的方格数
#define CROP 1E15   //一粒计算的美国小麦产量
int main(void)
{
    double current , total;
    int count =1;

    printf("square  grains added ");
    printf("  total grains ");
    printf("  fraction of  \n ");
    printf("\t\t\t\t      US total\n");
    total = current = 1.0 ;//开始时为1粒
    printf("%4d %13.2e %13.2e %13.2e\n",count,current,total,total/CROP);
    while(count <SQUARES)
    {
        count = count +1;
        current = 2.0 * current;
        total = total + current; //更新总数
        printf("%4d %13.2e %13.2e %13.2e\n",count,current,total,
               total/CROP);

    }
    printf("That's all.\n");
    return 0;
}
