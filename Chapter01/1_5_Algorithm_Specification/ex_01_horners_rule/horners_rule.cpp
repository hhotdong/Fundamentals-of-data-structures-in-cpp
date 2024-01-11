#include <iostream>

// Horner's rule: A means of evaluating a polynomial at a point x0 using a minimum number of multiplications.
double horners_rule(const double* coefficients, const int coeff_len, const double constant, const double x)
{
    if (coeff_len == 0)
        return constant;
    return horners_rule(coefficients, coeff_len - 1, coefficients[coeff_len - 1], x) * x + constant;
}

int main(void)
{
    double coefficients[] = { 1.1, 5.0, -2.2 };
    int    coeff_len      = sizeof(coefficients) / sizeof(coefficients[0]);
    double constant       = 5.0;
    double x              = 3.0;
    double evaluation     = horners_rule(coefficients, coeff_len, constant, x);

    std::cout << "Polynomial: 1.1x^3 + 5.0x^2 - 2.2x + 5.0" << std::endl;
    std::cout << "Condition : x = 3.0" << std::endl;
    std::cout << "Evaluation: " << evaluation << std::endl;

    return 0;
}
