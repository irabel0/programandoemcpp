//Programa para somar dois elementos

#include <iostream>

int main(){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    std::cout << "Entre com um número: ";
    std::cin >> n1;
    
    std::cout << "Entre com outro número: ";
    std::cin >> n2;
    std::cout << "\n";

    n3 = n1 + n2;

    std::cout << "Resultado: "<< n3 <<"";
    std::cout << "\n\n";

}