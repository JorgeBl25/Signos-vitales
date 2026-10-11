#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm >= 60 && lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
}

int main() {
    int frecuencia;

    std::cout << "Ingrese su frecuencia cardiaca: ";
    std::cin >> frecuencia;

    std::cout << "Su estado es: " << clasificarFrecuencia(frecuencia)
              << " (" << frecuencia << " lpm)" << std::endl;

    return 0;
}