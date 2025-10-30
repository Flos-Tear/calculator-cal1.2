#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char op;
    float N1, N2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter first operands: ";
    cin >> N1;
    cout << "Enter second operands: ";
    cin >> N2;


    switch(op){
        case '+'://แสดงผล
            result = N1 + N2;
            break;
        case '-':
            result = N1 - N2;
            break;
        case '*':
            result = N1 * N2;
            break;
        case '/':
            result = N1 / N2;
            break;
    default:
        cout << "Error! operator is not correct";
        result = -DBL_MAX;
        break;
    }
        if (result != -DBL_MAX)
            cout << N1 <<  op  << N2 << " = " << result ;
    return 0;
}