#include "easy.h"

void itc_name()
{
    cout << "Evgeniy" << " ";
}

void itc_fio()
{
    itc_name();
    cout << "Dymkov" << " " << "Alexandrovich" << endl;
}

int itc_abs(int num)
{
    if (num < 0)
        num *= -1;
    return num;
}

double itc_fabs(double num)
{
    if (num < 0)
        num *= -1;
    return num;
}

int itc_revnbr(int num)
{
    int result = 0;
    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = itc_abs(num);
    }
    while (num != 0)
    {
        result += num % 10;
        if (num / 10 != 0)
            result *= 10;
        num /= 10;
    }
    if (isNegative)
        result *= -1;
    return result;
}
