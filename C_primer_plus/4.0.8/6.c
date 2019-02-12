#include <stdio.h>
//使用double 类型显示 1.0/3.0
//使用float类型显示1.0/3.0的变量
//每个变量的值显示三次；
//一次在小数点右侧显示4个数字
//一次在小数点右侧显示12个数字
//另一次在小数点右侧显示16个数字
//要让程序包括float.h文件，并显示FLT_DIG he DBL_DIG 的值

int main(void)
{
    float f = 1.0/3.0;
    double d = 1.0/3.0;
    printf("float类型显示三个数%.3f 显示12个数字%.12f\n",f,f);
    printf("double类型显示三个数%.3lf 显示12个数字%.12lf\n",d,d);

    return 0;

}

