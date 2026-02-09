// 09_02_2026 prog01: calculadora_de_hipotenusa
// por yuuuchua

#include <iostream>
#include <cmath>

int main ()
{
    double cat1;
    double cat2;
    double hipotenusa;   

    std::cout << R"(Calculadora de hipotenusa

            |\
            | \
            |  \
            |   \
       cat1 |    \ hipotenusa
            |     \
            |      \
            |       \
            ----------
               cat2 )" << "\n\n";

    std::cout << "Digite o valor de \"cat1\" e \"cat2\"" << '\n';

    std::cout << "cat1 = ";
    std::cin >> cat1;

    std::cout << "cat2 = ";
    std::cin >> cat2;


    hipotenusa = sqrt(cat1*cat1 + cat2*cat2);

    std::cout << "A hipotenusa sera " << hipotenusa << "!" << '\n';
    return 0;
}