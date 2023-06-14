//
//#include <iostream>
//#include <cmath>
//#include<functional>
//using namespace std;
//
//double regular_falsi(double (*f)(double), double a, double b)
//{
//    double eps = 0.000001;
//    int max_iterations = 1000;
//    double fa = f(a);
//    double fb = f(b);
//    double c = a;
//
//    for (int i = 0; i < max_iterations; i++)
//    {
//        double fc = f(c);
//        double prev_c = c;
//        c = (a * fb - b * fa) / (fb - fa);
//        double f_c = f(c);
//        cout << "Iteration  " << i << " : c = " << c << endl;
//        if (abs(f_c) < eps)
//        {
//            break;
//        }
//
//        if (f_c * fc < 0) 
//        {
//            b = c;
//            fb = f_c;
//        }
//        else
//        {
//            a = c;
//            fa = f_c;
//        }
//
//        if (abs(c - prev_c) < eps)
//        {
//            break;
//        }
//    }
//
//    return c;
//}
//
//double my_function(double x)
//{
//    return 2 * x * x - 9 * x + 4;
//}
//
//int main()
//{
//    double a = -2.0;
//    double b = 7.0;
//    double (*f)(double) = my_function;
//    double root = regular_falsi(f, a, b);
//    cout << "Root: " << root << endl;
//    return 0;
//}
