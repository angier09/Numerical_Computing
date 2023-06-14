//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//double accuracy = 0.001;
//
//double inputFunc(int x, int choice)
//{
//
//	switch (choice)
//	{
//	case 1:
//	{
//		return x * x * x + x - 4;
//		break;
//	}
//	case 2:
//	{
//		int x2 = x * 3;
//		double e = 0;
//		int E = exp(e);
//		double answer = x2 - E ^ x;
//		return answer;
//		break;
//	}
//	case 3:
//	{
//		return (x * x) - 3;
//		break;
//	}
//	case 4:
//	{
//		int x2 = x * 3;
//		double ans = x2 - static_cast<int>(1 + sin(x)) ^ 1 / 2;
//		break;
//	}
//	default:
//		break;
//	}
//}
//
//void bisectionEvaluation(double a, double b, int choice)
//{
//
//	double c = a;
//	while ((b - a) >= accuracy)
//	{
//		c = (a + b) / 2;
//
//		if (inputFunc(c, choice) * inputFunc(a, choice) < 0)
//			b = c;
//		else
//			a = c;
//	}
//	cout << "Root : [" << c << "," << c << "]" << endl;
//}
//
//int main()
//{
//
//	double a = 0, b = 0;
//	cout << "Enter Invtervals" << endl;
//	cout << "Enter a = ";
//	cin >> a;
//	cout << "Enter b = ";
//	cin >> b;
//
//	cout << "BISECTION METHOD " << endl;
//	cout << "1. x^3 + x - 4 " << endl;
//	cout << "2. 3x - e^x" << endl;
//	cout << "3. x^2 - 3" << endl;
//	cout << "4. 3x - (1+sin(x))^1/2" << endl;
//	int choice = 0;
//	cout << "Enter Choice : ";
//	cin >> choice;
//	cout << endl;
//
//	switch (choice)
//	{
//	case 1:
//	{
//		cout << "f(x) : x^3 + x - 4 " << endl;
//		break;
//	}
//	case 2:
//	{
//		cout << "f(x) : 3x - e^x" << endl;
//		break;
//	}
//	case 3:
//	{
//		cout << "f(x) : x^2 - 3" << endl;
//		break;
//	}
//	case 4:
//	{
//		cout << "f(x) : 3x - (1+sin(x))^1/2" << endl;
//		break;
//	}
//	default:
//		break;
//	}
//
//	bisectionEvaluation(a, b, choice);
//	return 0;
//}
