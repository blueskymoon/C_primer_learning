#include <stdio.h>

int main(void)
{
    int num = 1;
    printf("  数字   平方\n");
    while(num <= 100)
    {
        printf("%4d %6d\n",num,num*num);
        num = num + 1;

    }
    return 0;
}
