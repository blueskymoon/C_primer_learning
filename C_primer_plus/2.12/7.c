#include <stdio.h>
/*调用one_three()函数，显示one。调用two()显示three.调用two()显示two。main函数中显示starting now，末尾显示done!.
 * starting now:
 * one
 * two
 * three
 * done!
 */
void one_three(void);
void two(void);
int main(void)
{
    printf("starting now:\n");
    one_three();
    two();
    printf("three\n");
    printf("done!\n");
    return 0;
}
void one_three(void)
{
    printf("one");
    printf("\n");
}
void two(void)
{
    printf("two\n");
}
