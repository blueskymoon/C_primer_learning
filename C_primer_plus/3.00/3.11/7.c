#include <stdio.h>
//英寸转换为厘米
int main(void)
{
    double high,yc;
    scanf("%lf",&high);
   yc = high / 2.54;
   printf("身高cm = %lf ,身高英寸 = %f\n",high,yc);
   return 0;
}
