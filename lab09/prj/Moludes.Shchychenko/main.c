
#include "ModulessShchychenko.h"
#include <math.h>

int FUNC1(int x, int y, int b)
{
if(y > 1 && y < 6)

    {
        b = x * 1/20;

        x = x + b;
    }
    if(y > 5 && y < 11)

    {
        b = x * 1/10;

        x = x + b;
    }

    if(y > 10)

    {

        b = x * 1/5;

        x = x + b;

    }
    return b, x;
}

int FUNC2(int k, int vib)
{
    if(a < 53)
    {
     vib = 10;
    }
    if( a > 52 && a < 55)
    {
     vib = 20;
    }
    if( a > 54 && a < 57 || a > 47 && a < 50)
    {
     vib = 30;
    }
    if( a > 56 && a < 59 || a > 49 && a < 52)
    {
     vib = 40;
    }
    if( a > 58 && a < 61 || a > 51 && a < 54)
    {
     vib = 50;
    }
    if( a > 60 && a < 63)
    {
     vib = 60;
    }
   return vib;
}
int FUNC3(int k)
{
   bool is_d15_set = (k >> 15) & 1;


    for (int i = 0; i < sizeof(int)*8; i++)
    {
        (k & (1 << i)) ? one++ : zero++;


    }


    for (int i = 0; i < sizeof(int)*8; i++)
    {
        (k & (1 << i)) ? one++ : zero++;


    }

    return one, zero;
}
double s_calculator(double x,double y, double z)

{

    double pi = 3.14;

    double S;

    S = (0.5*pow((abs(2*z-pow(x,2)))/sin(x),3))/sqrt(1 + abs(cos(x)))+2*pi;

    return S;

}
