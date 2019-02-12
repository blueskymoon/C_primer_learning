#include <stdio.h>
/*bases.c --以十进制、八进制、十六进制形式输出100*/
/*为了显示八进制和十六进制的符号，可以在%后面添加#，%o表示八进制，%x表示16进制。*/
int main(void)
{
    int x = 100;
    printf("dec = %d;octal = %o; hex = %x\n",x,x,x);
    printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);
    return 0;
}
