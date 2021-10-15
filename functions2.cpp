#include "easy.h"

bool itc_iseven(int num)
{
    return num % 2 == 0;
}

int itc_max(int num, int num2)
{
    int maxNum;
    if (num > num2)
        maxNum = num;
    else maxNum = num2;
    return maxNum;
}

int itc_min(int min1, int min2)
{
    int minNum;
    if (min1 > min2)
        minNum = min2;
    else
        minNum = min1;
    return minNum;
}

double itc_fmax(double num, double num2)
{
    double maxNum;
    if (num > num2)
        maxNum = num;
    else
        maxNum = num2;
    return maxNum;
}

double itc_fmin(double min1, double min2)
{
    double minNum;
    if (min1 > min2)
        minNum = min2;
    else
        minNum = min1;
    return minNum;
}
