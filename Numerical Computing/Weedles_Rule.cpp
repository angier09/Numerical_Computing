//#include <iostream>
//#include<iomanip>
//
////#define ll long long
////#define pb push_back
////#define mp make_pair
//using namespace std;
//
////function f(x)
//float y(float x)
//{
//	return 1 / (1 + x * x); 
//}
//
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
//	if (n % 6 != 0)
//	{
//
//		cout << "Error! Interval must be multiple of 6" << endl;
//		exit(0);
//	}
//	cout << fixed;
//	//calculating h
//	h = (xn - x0) / n;
//	cout << "y0 = " << y(x0) << endl;
//	//calculating y0+yn
//	s = y(x0) + y(xn);
//	int m = n / 6;
//	for (int i = 1; i <= m; i++) 
//	{
//		cout << "y" << i << " = " << y(x0 + h) << endl;
//		cout << "y" << i+1 << " = " << y(x0 + 2 * h) << endl;
//		cout << "y" << i+2 << " = " << y(x0 + 3 * h) << endl;
//		cout << "y" << i+3 << " = " << y(x0 + 4 * h) << endl;
//		cout << "y" << i+4 << " = " << y(x0 + 5 * h) << endl;
//		cout << "y" << i+5 << " = " << y(x0 + 6 * h) << endl;
//
//		s += 3 * (h / 10) * (y(x0) + 5 * y(x0 + h) + y(x0 + 2 * h) + 6 * y(x0 + 3 * h) + y(x0 + 4 * h) + 5 * y(x0 + 5 * h) + y(x0 + 6 * h));
//		x0 += 6 * h;
//	}
//	cout << "y" << n << " = " << y(xn) << endl;
//	
//
//    cout << "Value of integral is = " << setprecision(4) << s << endl;
//
//	return 0;
//}