#include <stdio.h>
/*将年龄转换为天数*/
int main(void)
{
    int age,date;
    scanf("%d",&age);
    date=age*365;
    printf("天数%d\n",date);
    return 0;
}
