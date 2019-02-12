#include <stdio.h>
//输入身高和名字
//显示
//Dabby, you are 6.208 feet tall

int main(void)
{
    float tall;
    scanf("%f",&tall);
    printf("Dabby, you are %.3f feet tall\n",tall/100);
    return 0;
}
