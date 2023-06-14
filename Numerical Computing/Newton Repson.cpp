//#include <iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//
////question x=sqrt12
////function : f(x)=x^2-12
////derivative : f`(x)=2x
//float f(float x)
//{
//    return (x*x) - 12;
//}
//float df(float x)
//{
//    return 2 * x;
//}
//int main()
//{
//    int itr=0, maxitr=0;
//    float h=0.0, x0=0.0, x1=0.0, aerr=0.0;
//    aerr = 0.001;
//    
//    cout << "Function : f(x) = x^2-12" << endl;
//    cout << "Derivative of Function : f(x) = 2x" << endl;
//    cout << "Enter Guess = ";
//    cin >> x0;
//    cout << "Enter Maximum iterations = ";
//    cin >> maxitr;
//    cout << fixed;
//    for (itr = 1; itr <= maxitr; itr++)
//    {
//        h = f(x0) / df(x0);
//        x1 = x0 - h;
//        cout << "Iteration number" << setprecision(6) << x1 << endl;
//        if (fabs(h) < aerr) //checking that desired decimal point reached
//        {
//            cout << "After " << itr << " iterations, root = " << setprecision(6) << x1;;
//            return 0;
//        }
//        x0 = x1;
//    }
//    //if function is divargent
//    cout << "Function divergent" << endl;
//    return 1;
//}