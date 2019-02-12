#include <stdio.h>
/*进制转换溢出测试，int整数型，在不同的计算机中占不同的位数，16,32,64跟随计算机所决定的。long int 会将int型位数扩大2倍。long long int 扩大4倍。%u 为无符号型。*/
int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537; long long verybig = 12345678908642;
    printf("un = %u and not %d\n",un,un);
    printf("end = %hd and %d\n",end,end);
    printf("big = %ld and not %hd\n",big,big);
    printf("verybig = %lld and not %d\n",verybig,verybig);
    return 0;
}
