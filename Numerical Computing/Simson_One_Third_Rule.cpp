//#include <iostream>
//#include <iomanip>
//using namespace std;
//float y(float x)
//{
//    return 1 / (1 + x * x);
//}
//int main()
//{
//    float x0 = 0.0, xn = 0.0, h = 0.0, s = 0.0;
//    int n = 0;
//
//    cout << "Enter x0 = ";
//    cin >> x0;
//    cout << "Enter xn = ";
//    cin >> xn;
//    cout << "Enter number of sub intervals = ";
//    cin >> n;
//
//    if (n % 2 != 0)
//    {
//        cout << "Error! Interval must be even" << endl;
//        exit(0);
//    }
//    cout << fixed;
//    //calculating h
//    h = (xn - x0) / n;
//    cout << "y0 = " << y(x0) << endl;
//    
//    //calculating y0+yn
//    s = y(x0) + y(xn);
//    for (int i = 1; i <= n - 1; i++)
//    {
//        if (i % 2 == 0) //2*(y2+y4+...)
//        {
//            cout << "y" << i << " = " << y(x0 + i * h) << endl;
//            s += 2 * y(x0 + i * h);
//        }
//        else ////4*(y3+y5+...)
//        {
//            cout << "y" << i << " = " << y(x0 + i * h) << endl;
//            s += 4 * y(x0 + i * h);
//        }
//    }
//    cout << "y" << n << " = " << y(xn) << endl;
//
//    
//    float result = (h / 3) * s;
//    cout << "Value of integral is = "<< setprecision(4)<< result << endl;
//    return 0;
//}