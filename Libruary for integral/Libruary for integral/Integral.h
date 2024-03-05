#pragma once
#include <Math.h>
/*
extern long double func(long double x) {
    /*return(sqrt( sin(0.5*x)/cos(0.25*x) ));
    return(sin(0.5 * x));

}*/

extern double long segment_squre(long double x0, long double x1, double (*func)(double))
{
    long double Squ;//
    Squ = ((func(x0) + func(x1)) / 2) * (x1 - x0);
    return Squ;
}


extern double long integral(long double step, long double start, long double stop, double (*func)(double)) {
    long double square = 0;

    while (start < stop) {
        square += segment_squre(start, start + step,func);
        start += step;
    }
    return square;
}
