#include <stdio.h>
//求水分子个数，1个水分子质量3.0e-23克。一夸脱有950g。求水分子个数。
int main(void)
{
    float water;
    int sfz;
    scanf("%f",&water);
   sfz = water * 950;
   printf("水分子个数 = %d \n %e\n",sfz,sfz/3.03e-23);
}
