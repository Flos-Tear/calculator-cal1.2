#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    char op;
    float N1, N2, result;

    cout << "Enter operator (+, -, *, /,p): ";
    cin >> op;

    cout << "Enter first operands: ";
    cin >> N1;
    cout << "Enter second operands: ";
    cin >> N2;

    if (op == '+')
        result = N1 + N2;
    else if (op == '-')
        result = N1 - N2;
    else if (op == '*')
        result = N1 * N1;
    else if (op == '/')
        result = N1 / N2;
    else if (op == 'p')
        result = pow(N1, N2);
    else if (op == 'r')
        result = sqrt(N1,N2);
    else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }
        if (result != -DBL_MAX)
            cout << N1 <<  op  << N2 << " = " << result ;
    return 0;
}