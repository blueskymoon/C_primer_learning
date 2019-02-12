#include <stdio.h>
//1.将分钟数转化为小时和分钟数。
const int time=60;
int main(void)
{
    int m,h;
    int minute;
    /*printf("input times");
    scanf("%d",&minute);*/
    while(minute>0){ 
    printf("输入分钟数：\n");
    scanf("%d",&minute);
    m = minute % time;
    h = minute / time;
    printf("输出小时:%d\n输出的分钟数:%d\n",h,m);
    }
    return 0;
}
