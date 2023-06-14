//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//void gauss_seidel(double** coeffs, double* constants, double* variables, int num_vars, int max_iter, double tolerance)
//{
//    int iter = 0;
//    while (iter < max_iter)
//    {
//        double difference = 0;
//
//        for (int i = 0; i < num_vars; i++)
//        {
//            double sum = 0;
//
//            for (int j = 0; j < num_vars; j++)
//            {
//                if (j != i)
//                {
//                    sum += coeffs[i][j] * variables[i];
//                }
//            }
//
//            double new_variable = (constants[i] - sum) / coeffs[i][i];
//
//            difference += abs(new_variable - variables[i]);
//            variables[i] = new_variable;
//        }
//
//        if (difference < tolerance)
//        {
//            cout << "Gauss-Seidel method converged after " << iter + 1 << " iterations." << endl;
//            return;
//        }
//
//        iter++;
//    }
//
//    cout << "Gauss-Seidel method failed to converge within " << max_iter << " iterations." << endl;
//}
//
//int main()
//{
//    int num_vars = 3;
//    double** coeffs = new double* [num_vars];
//    for (int i = 0; i < num_vars; i++)
//    {
//        coeffs[i] = new double[num_vars];
//    }
//
//    double* constants = new double[num_vars];
//
//    coeffs[0][0] = 27; coeffs[0][1] = 6; coeffs[0][2] = -1; constants[0] = 85;
//    coeffs[1][0] = 6; coeffs[1][1] = 15; coeffs[1][2] = 2; constants[1] = 72;
//    coeffs[2][0] = 1; coeffs[2][1] = 1; coeffs[2][2] = 54; constants[2] = 110;
//
//    double* variables = new double[num_vars];
//
//    for (int i = 0; i < num_vars; i++)
//    {
//        variables[i] = 0;
//    }
//
//    cout << "Matrix A : " << endl;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout << coeffs[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "Matrix X : " << endl;
//    cout << " x" << endl << " y" << endl << " z" << endl;
//
//    cout << "Matrix B:" << endl;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << constants[i] << endl;
//    }
//    int max_iter = 1000;
//    double tolerance = 1e-6;
//
//    gauss_seidel(coeffs, constants, variables, num_vars, max_iter, tolerance);
//
//    cout << endl << "Solution using Gauss-Seidel method:" << endl;
//
//    for (int i = 0; i < num_vars; i++)
//    {
//        cout << "x" << i + 1 << " = " << variables[i] << endl;
//    }
//    cout << endl;
//    return 0;
//}
