#include "easy.h"

double itc_pow(double num, int i)
{
    if (i < 0)
    {
        num = 1 / num;
        i *= -1;
        return num * itc_pow(num, i - 1);
    }
    else if (i == 0)
        return 1;
    else
        return num * itc_pow(num, i - 1);
}

bool itc_ispositive(int num)
{
    return num >= 0;
}

bool itc_ispositive_d(double num)
{
    return num >= 0;
}
