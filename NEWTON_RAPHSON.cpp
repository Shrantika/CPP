#include <iostream>
#include <cmath>

using namespace std;


double f(double x) {
    return 3 * pow(x, 3) - 8 * x + 5;
}


double df(double x) {
    return 9 * pow(x, 2) - 8;
}

// Newton-Raphson Method
void newtonRaphson(double x0, double tol, int max_iter) {
    double x = x0;
    int iter = 1;

    while (iter <= max_iter) {
        double fx = f(x);
        double dfx = df(x);

        if (dfx == 0) {  // Avoid division by zero
            cout << "Derivative is zero. Choose a different initial guess.\n";
            return;
        }

        double x_new = x - fx / dfx;

        cout << "Iteration " << iter << ": x = " << x_new << ", f(x) = " << fx << endl;

        if (fabs(x_new - x) < tol) {  
            cout << "Root found: " << x_new << endl;
            return;
        }

        x = x_new;
        iter++;
    }

    cout << "Max iterations reached. Approximate root: " << x << endl;
}

int main() {
    double x0 = 0.5;  
    double tol = 1e-6; 
    int max_iter = 100; 

    newtonRaphson(x0, tol, max_iter);

    return 0;
}
