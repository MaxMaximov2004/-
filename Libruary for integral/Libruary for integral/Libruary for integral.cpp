#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include "Integral.h"
double func( double x);
double long segment_squre(long double x0, long double x1);
double long integral_rect_trap(int number_segments, long double start, long double stop);
double long accuracy();
double long integral_rect(int number_segments, long double start, long double stop);
double long metod_simpson(long double start, long double stop);
double long metod_simpson(int number_aegments,long double start, long double stop);

int main()
{ 
    

    std::cout << integral(0.000000001, 0, 0.392699081, &func);

    //std::cout << integral(accuracy(),1,10) ;
    //std::cout << metod_simpson(0, 3.141592/2)<< " + " << metod_simpson(3.141592 / 2, 3.141592)<< " = " << metod_simpson(0, 3.141592)<<'\n';
    return 0;
}



double  func( double x)
{
    return( sqrt(1+tan(x)*tan(x)) );
}
//
//double long segment_squre(long double x0, long double x1)
//{
//    long double Squ;// площадь прямоугольной трапеции, где func(x0) и func(x1) -основания трапеции (росстояние от оси 0x до графика функции)
//
//    Squ = ((func(x0) + func(x1)) / 2) * (x1 - x0);
//    return Squ;
//}
//
//double long integral_rect_trap(int number_segments, long double start, long double stop) {
//    if (start >= stop){return -1;}
//    if (number_segments <= 0) { return -2; }
//
//    long double step = (stop-start) / number_segments;
//    long double square = 0;
//
//    while (start < stop) {
//        square += segment_squre(start, start + step);
//        start += step;
//    }
//    return square;
//
//    /*if (start >= stop){return -1;}
//    if (number_segments <= 0) { return -2; }
//
//    long double step = (stop)*/
//}
//
//long double rectangle_squre(long double length, long double centre) {
//    //length-длина сторона прямоугольника образованная осью 0х
//    //centre-координата середины этой стороны
//    long double squ;
//    squ = func(centre) * length;
//    return (squ );
//}
//
//double long integral_rect(int number_segments, long double start, long double stop) {
//    if (start >= stop) { return -1; }
//    if (number_segments <= 0) { return -2; }
//
//    long double step = (stop - start) / number_segments;
//    long double square = 0;
//
//    while (start < stop) {
//        square += rectangle_squre(step,start+(step/2));
//        start += step;
//    }
//    return square;
//
//}
//
//double long metod_simpson(long double start, long double stop) {
//
//    return( ((stop-start)/6) *(func(start) + 4*func((stop + start) / 2) + func(stop)) );
//}
//
//double long metod_simpson(int number_segments, long double start, long double stop) {
//    if (start >= stop) { return -1; }
//    if (number_segments <= 0) { return -2; }
//
//    long double step = (stop - start) / number_segments;
//    long double square = 0;
//
//    while (start < stop) {
//        square += metod_simpson(step, start + step);
//        start += step;
//    }
//    return square;
//}
//
//double long accuracy() {
//    //смысол этой функции: находим близжайшие точки локального минимума и максимума и вычисляем определённый интеграл от них
//    //затем с переменным шагом вычисляем этот интеграл и находим разность 
//
//   long double max= 0, min=3;
//    long double a = 0.001;
//
//
//  /*  for (int i = 1; i < 10000; i++) {
//        long double f_value = func(i);
//
//        if ((f_value >= max)&&(f_value!=0)) { max = int(f_value); }
//        if ((f_value <= min)&&(f_value!=0)) { min = int(f_value); }
//
//    }
//    */
//
//    bool exit=true;
//
//    long double first_value=1/*=integral(a,min,max)*/, second_value;
//    long double first_acc, second_acc;
//
//    while (exit) {
//
//        second_value = first_value;
//        //first_value /*= integral(a, min, max)*/;
//
//        first_acc = (first_value - second_value);
//        second_acc = first_acc;
//
//        if ( round(first_acc*100)/ 100 == round(second_acc*100)/ 100) { exit = false; }
//
//        a *= 0.1;
//    }
//
//    return(second_acc);
//}