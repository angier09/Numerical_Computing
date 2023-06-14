////factorization method
//#include <iostream>
//#include <iomanip>
//
//#define N 3
//using namespace std;
//
//typedef float matrix[N][N];
//matrix l, u, a;
//float b[N], x[N], v[N];
//
//void urow(int i) //calculating u matrix : upper triangular matrix 
//{
//    float s;
//    for (int j = i; j < N; j++)
//    {
//        s = 0;
//        for (int k = 0; k < N - 1; k++)
//            s += u[k][j] * l[i][k];
//        u[i][j] = a[i][j] - s;
//    }
//}
//void lcol(int j) //calculating l matrix : lower triangular matrix
//{
//    float s;
//    for (int i = j + 1; i < N; i++) 
//    {
//        s = 0;
//        for (int k = 0; k <= j - 1; k++)
//            s += u[k][j] * l[i][k];
//        l[i][j] = (a[i][j] - s) / u[j][j];
//    }
//}
//void printmat(matrix x)
//{
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            cout << " " << setprecision(4) << x[i][j];
//
//        }
//        cout << endl;
//    }
//}
//
//int main() 
//{
//    float s;
//    cout << "Enter the elements of augmented matrix " << endl;
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            cout << "Matrix A[" << i << "][" << j << "] = ";
//            cin >> a[i][j];
//        }
//        cout << "Enter B[" << i << "] = ";
//        cin >> b[i];
//    }
//    
//    cout << fixed;
//    // now calculating the elements of l and u 
//    //diagonal entries of L = 1
//    for (int i = 0; i < N; i++)
//    {
//        l[i][i] = 1.0;
//    }
//
//    for (int m = 0; m < N; m++) 
//    {
//        urow(m); //calculating upper triangular matrix 
//        if (m < N - 1)
//        {
//            lcol(m);  //lower triangular matrix
//        }
//    }
//    
//    // now printing the elements of l and u 
//    cout << "Matrix U : " << endl;
//    printmat(u);
//    cout << "Matrix L : " << endl;
//    printmat(l);
//
//    //now solving LV=B by forward substitution 
//    //calculate y1,then y2,then y3
//    //subtarction by the values of known variables
//    for (int i = 0; i < N; i++)
//    {
//        s = 0;
//        for (int j = 0; j <= i - 1; j++)
//            s += l[i][j] * v[j];
//        v[i] = b[i] - s;
//    }
//
//    //now solving UX=V by backward substitution
//    //start from last value of z
//    //then caluculate y and x
//    for (int i = N - 1; i >= 0; i--) 
//    {
//        s = 0;
//        for (int j = i + 1; j < N; j++)
//        {
//            s += u[i][j] * x[j];
//        }
//        x[i] = (v[i] - s) / u[i][i]; //dividion by coefficents of variable 
//    }
//
//    // printing the results 
//    cout << "Matrix X :" << endl;
//    for (int i = 0; i < N; i++)
//    {
//        cout << "x[" << i + 1 << "] = " << setprecision(4) << x[i] << endl;
//    }
//
//    return 0;
//}