#include <iostream>

int main() {
    double user_pesos, user_reais, user_soles;
    double ptusd = 0.00026000, rtusd = 0.19612, stusd = 0.26667;

    // Columbian pesos input
    std::cout << "Enter number of columbian pesos: " << std::endl;
    std::cin >> user_pesos;
    
    // Brazillian reais input
    std::cout << "Enter number of brazillian reais: " << std::endl;
    std::cin >> user_reais;

    std::cout<< "Enter number of peruvian soles: " << std::endl;
    std::cin >> user_soles;

    double dollars = (ptusd * user_pesos) + (rtusd * user_reais) + (stusd * user_soles);

    std::cout << "US Dollars = $" << dollars << std::endl;

    return 0;
}
