#include <stdio.h>
//用户输入行驶的英里数和消耗汽油的加仑数
//显示计算和显示消耗每加仑汽油姓氏的英里数
//显示方式是在小数点右侧显示一个数子
//一加仑汽油约等于3.785升
//一英里约等于1.609公里
const float qy = 3.785;         //const的用法
const float yl = 1.609;         //const固定的数以后不能改变了

int main(void)
{
    float input;
    float output;
    printf("Please enter the amount of fuel added\n");
    scanf("%f",&input);
    output = input * qy;
    printf("Display distance %.1f\n",output);
    return 0;

}
