#include <stdio.h>
//1.输入天数转化为周数和天数
#define weeks 7
int main(void)
{
    int days,week,day;
    while(days > 0)
    {
    printf("Please input days :");
    scanf("%d",&days);
    week = days / weeks;
    day = days % weeks;
    printf("output week:%d\n output day:%d\n",week,day);
    }
    return 0;
}
