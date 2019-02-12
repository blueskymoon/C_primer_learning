#include <stdio.h>      //typesize.c        输出类型大小
/*使用%zu展位符表示无符号类型名，否则会有警告，但可以运行。
int main(void)
{
    printf("Type int has a size of %zu bytes.\n",sizeof(int));
    printf("Type char has a size of %zu bytes.\n",sizeof(char));
    printf("Type long has a size of %zu bytes.\n",sizeof(long));
    printf("Type double has a size of %zu bytes.\n",sizeof(double));
    return 0;
}
