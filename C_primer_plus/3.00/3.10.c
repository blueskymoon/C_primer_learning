#include <stdio.h>
/*escape.c  --使用转义字符*/

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $_______\b\b\b\b\b\b\b");          /*\b是退位符，光标向前一位*/
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12.0);
    printf("\rGee!\n");
    return 0;
}
