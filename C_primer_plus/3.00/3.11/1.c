#include <stdio.h>
//观察系统如何处理上溢、浮点数溢出、浮点数下溢的情况。
int main(void)
{
    int syc = 99999999999999;
    float fsyc = 65535000000000 ;
    float xxyc = 65535888888888888888888888;
    printf("整数溢出%d\n,浮点数上溢出%f\n,浮点数下溢出%f\n",syc,fsyc,xxyc);
    return 0;
}
