#include <stdio.h>
//打印较长的字符串

int main(void)
{
    printf("Here's one way to print a* ");
    printf("long string.\n");    //上一句没有换行符\n，所以打印的时候两句并为一句
    printf("Here's another way to print a \
long string .\n");
    printf("Here's the newest way to print a "
           "long string .\n");   /* ANSI C */
    return 0;
}
