#include <stdio.h>
//大数处理。一年3.156*10^7s,输入年龄求出共多少秒。
int main(void)
{
    int age;
    float lss;
    scanf("%d",&age);
   lss = 3.156e7 * age;
   printf("s= %e",lss);
}
