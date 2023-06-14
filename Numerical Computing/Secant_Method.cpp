//#include<iostream>
//#include<iomanip>
//#include<math.h>
//#include<stdlib.h>
//
///* Defining equation to be solved.
//   Change this equation to solve another problem. */
//#define    f(x)    x*x*x*x - x - 10
//
//using namespace std;
//
//int main()
//{
//	float x0, x1, x2, f0, f1, f2, e;
//	int step = 1, N;
//
//	cout << setprecision(6) << fixed;
//	x0 = 1.5;
//	x1 = 2.0;
//	e = 0.0001;
//	N = 19;
//	/* Implementing Secant Method */
//	do
//	{
//		f0 = f(x0);
//		f1 = f(x1);
//		if (f0 == f1)
//		{
//			cout << "Not applicable";
//			exit(0);
//		}
//
//		x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
//		f2 = f(x2);
//
//		cout << "Iteration " << step << " = " << f(x2) << endl;
//
//		x0 = x1;
//		f0 = f1;
//		x1 = x2;
//		f1 = f2;
//
//		step = step + 1;
//
//		if (step > N)
//		{
//			cout << "Not Convergent.";
//			exit(0);
//		}
//	} while (fabs(f2) > e);
//
//	cout << endl << "Root is: " << x2;
//
//	return 0;
//}
//
//
//
