#include <stdio.h>
//不匹配的浮点数转换
//计算机是将变量的的值存储到堆栈里面，在一个内存里面。数据的大小是根据变量的类型划分大小的。
int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    return 0;
}
