#include <stdio.h>
//将printf函数赋值
//发现printf()函数的返回值
int main(void)
{
    int bph2o =212;
    int rv;

    rv = printf("%d F is water's boiling point.\n",bph2o);      //先打印
    printf("The printf()function printf %d characters.\n",rv);      //后打印

    return 0;
}
