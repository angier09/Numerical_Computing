//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////function f(x)
//float y(float x)
//{
//    return 1 / (1 + x * x);
//}
//
////trapezoidal rule
//int main()
//{
//    float x0 = 0.0, xn = 0.0, h = 0.0, s = 0.0;
//    int i = 0, n = 0;
//
//    cout << "Enter x0 = ";
//    cin >> x0;
//    cout << "Enter xn = ";
//    cin >> xn;
//    cout << "Enter number of sub intervals = ";
//    cin >> n;
//    cout << fixed;
//    //calculating h
//    h = (xn - x0) / n;
//    //calulating y0+yn
//    s = y(x0) + y(xn);
//    cout << "y0 = " << y(x0) << endl;
//
//    //calculating 2*(y1...yn-1)
//    //than add s to it
//    for (i = 1; i <= n - 1; i++)
//    {
//        cout << "y" << i << " = " << y(x0 + i * h) << endl;
//        s += 2 * y(x0 + i * h);
//
//    } 
//    cout << "y"<<n<<" = " << y(xn) << endl;
//
//    float result = (h / 2) * s;
//    cout << "Value of integral is = " << setprecision(8) << result << endl;
//    return 0;
//}