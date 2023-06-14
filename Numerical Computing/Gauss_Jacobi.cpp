//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//void gauss_jacobi(double** coeffs, double* constants, double* variables, int num_vars, int max_iter, double tolerance)
//{
//    int iter = 0;
//    while (iter < max_iter)
//    {
//        double difference = 0;
//        int i = 0;
//        while (i < num_vars)
//        {
//            double sum = 0;
//            int j = 0;
//            while (j < num_vars)
//            {
//                if (j != i)
//                {
//                    sum += coeffs[i][j] * variables[j];
//                }
//                j++;
//            }
//
//            double new_variable = (constants[i] - sum) / coeffs[i][i];
//
//            difference += abs(new_variable - variables[i]);
//            variables[i] = new_variable;
//            i++;
//        }
//
//        if (difference < tolerance)
//        {
//            cout << "Gauss-Jacobi method converged after " << iter + 1 << " iterations." << endl;
//            return;
//        }
//
//        iter++;
//    }
//
//    cout << "Gauss-Jacobi method failed to converge within " << max_iter << " iterations." << endl;
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
//    coeffs[0][0] = 4; coeffs[0][1] = 2;  coeffs[0][2] = 0;   constants[0] = 2;
//    coeffs[1][0] = 2; coeffs[1][1] = 5;  coeffs[1][2] = 2;   constants[1] = 4;
//    coeffs[2][0] = 0; coeffs[2][1] = 2;  coeffs[2][2] = 4;   constants[2] = 5;
//
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
//
//    double* variables = new double[num_vars];
//
//    int i = 0;
//    while (i < num_vars)
//    {
//        variables[i] = 0;
//        i++;
//    }
//
//    int max_iter = 1000;
//    double tolerance = 0.0000000000001;
//
//    gauss_jacobi(coeffs, constants, variables, num_vars, max_iter, tolerance);
//
//    cout << "Solution using Gauss-Jacobi method:" << endl;
//
//    int j = 0;
//    while (j < num_vars)
//    {
//        cout << "x" << j + 1 << " = " << variables[j] << endl;
//        j++;
//    }
//
//    return 0;
//}
