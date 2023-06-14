//#include<iostream>
//#include<iomanip>
//#include<math.h>
//#include<stdlib.h>
//
//float g1(int x)
//{
//	return (-sin(x) - cos(x)) / ((2) ^ x);
//}
//
//float g(int x)
//{
//	return (cos(x) / (2 ^ x));
//}
//
//float g2(int x)
//{
//	return ((6 + log(x)) / 3);
//}
//
//float g2Der(int x)
//{
//	return (0.33 * (static_cast<float>(1) / x * (2.3)));
//}
//using namespace std;
//int main()
//{
//	cout << "Question = 5" << endl;
//	cout << "Part-a" << endl;
//	cout << "f(x) = xe^x-cos(x)" << endl;
//	cout << "g(x)  = cos(x)/e^x" << endl;
//	cout << "|g`(x)| = (-sinx - cosx)/e^x" << endl;
//	cout << "Intetval [0,1]" << endl;
//
//	float guess = 0;
//	cout << "Enter Guess = ";
//	cin >> guess;
//	
//	while (abs(g1(guess)) > 1)
//	{
//		cout << "Wrong Guess. Enter again = ";
//		cin >> guess;
//	}
//
//	float x_1 = 0;
//	float  x_0 = guess;
//	int n = 12;
//	for (int i = 0; (x_1 != x_0 && i < n); i++)
//	{
//		x_1 = g(x_0);
//		x_0 = x_1;
//	}
//
//	cout << "The root = " << x_1 << endl;
//
//	cout << endl;
//	cout << endl;
//	cout << "Part-b" << endl;
//	cout << "f(x) = 3x-6 = log (x)" << endl;
//	cout << "g(x)  = 6+log(x)/3" << endl;
//	cout << "|g`(x)| = 1/3(1/xln(10))" << endl;
//	cout << "Intetval [2,3]" << endl;
//	cout << "Enter Guess = ";
//	cin >> guess;
//	while (abs(g2Der(guess)) > 3)
//	{
//		cout << "Wrong Guess. Enter again = ";
//		cin >> guess;
//	}
//	x_1 = 0;
//	x_0 = 0;
//	n = 3;
//	x_0 = guess;
//	for (int i = 0; (x_1 != x_0 && i < n); i++)
//	{
//		x_1 = g2(x_0);
//		x_0 = x_1;
//	}
//
//	cout << "root = " << x_1;
//	return(0);
//}