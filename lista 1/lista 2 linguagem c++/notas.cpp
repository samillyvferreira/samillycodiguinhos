#include <iostream>
#include <iomanip>
int main() {
    double n1, n2;
    out
    if (!(std::cin >> n1 >> n2)) {
        return 0;
    }
    double final_grade = (n1 + n2) / 2.0;
    std::cout << "NOTA FINAL = " << std::fixed << std::setprecision(1) << final_grade << std::endl;
    if (final_grade < 60.0) {
        std::cout << "REPROVADO" << std::endl;
    }
return 0;
}