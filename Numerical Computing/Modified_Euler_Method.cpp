//#include <iostream>
//#include <cmath>
//using namespace std;
//
////function
//float f(float y, float t)
//{
//    double x = y * (sqrt(1 + (t * t)));
//    return x;
//}
//
////y1=y0+hf(x0+h/2,y0+h/2*f(x0,y0))
//float Euler(float w, float t, float h)
//{
//    float y = t + ((h / 2) * f(w, t));
//    float x = w + (h / 2);
//    float k = t + (h * f(x, y));
//    return k;
//}
//
//int main()
//{
//    float xm = 0, ym = 0, h = 1, n = 0, yn = 0;
//
//    //initial condition
//    cout << "Enter x0 = ";
//    cin >> xm;
//    cout << "Enter y0 = ";
//    cin >> ym;
//
//    //ending value
//    cout << "Enter number of steps = ";
//    cin >> n;
//    cout << "y" << 0 << " = " << ym << endl;
//    for (int i = 0; i < n; i++)
//    {
//        //calculatin ym+1
//        yn = Euler(xm, ym, h);
//        //updating ym
//        ym = yn;
//        //updating xm+1=xm+h
//        xm += h;
//        cout << "y" << i + 1 << " = " << yn << endl;
//    }
//
//    return 0;
//}