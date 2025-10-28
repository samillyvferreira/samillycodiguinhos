#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c;
    if (!(std::cin >> a >> b >> c)) return 0;

    double delta = b*b - 4.0*a*c;
    if (a == 0.0 || delta < 0.0) {
        std::cout << "Sem Valor" << std::endl;
        return 0;
    }

    double sqrt_delta = std::sqrt(delta);
    double x1 = (-b + sqrt_delta) / (2.0 * a);
    double x2 = (-b - sqrt_delta) / (2.0 * a);

    std::cout << "x1 = " << std::fixed << std::setprecision(4) << x1 << std::endl;
    std::cout << "x2 = " << std::fixed << std::setprecision(4) << x2 << std::endl;

    return 0;
}