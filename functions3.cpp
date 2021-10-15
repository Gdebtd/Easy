#include "easy.h"

int itc_sqrt(int num)
{
    if (num < 0)
        return -1;
    else if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        int last = 0;
        int now = 0;
        int step = 10000;
        while (true)
        {
            if (now - 1 == last && now * now > num)
                return -1;
            if (now * now > num)
            {
                step /= 10;
                now = last;
            }
            else if (now * now < num)
            {
                last = now;
                now += step;
            }
            else
                return now;
        }
    }
    return -1;
}

int itc_skv(int num)
{
    if (num <= 0)
        return - 1;
    else
        return num * num;
}

int itc_spr(int a, int b)
{
    if ((a < 0 || b < 0) || (a == 0 || b == 0))
        return - 1;
    else
        return a * b;
}

int itc_str(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return -1;
    if ((a >= b + c) || (b >= a + c) || (c >= a + b))
        return -1;
    double p = a + b + c;
    p = p / 2;
    if ((p * (p - a) * (p - b) * (p - c)) <= 0)
        return -1;
    return itc_sqrt(p * (p - a) * (p - b) * (p - c));
}

double itc_scir(int radius)
{
    if (radius <= 0)
        return -1;
    double pi = 3.14;
    return radius * radius * pi;
}
