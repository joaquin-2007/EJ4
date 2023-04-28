#include <iostream>

// Función que calcula el salario actualizado según la tabla de reajuste
float CalcularSalario(int salario) {
    float porcentaje = 0.0; // Porcentaje de reajuste
    if (salario <= 400.00) {
        porcentaje = 0.15;
    } else if (salario <= 800.00) {
        porcentaje = 0.12;
    } else if (salario <= 1200.00) {
        porcentaje = 0.10;
    } else if (salario <= 2000.00) {
        porcentaje = 0.07;
    } else {
        porcentaje = 0.04;
    }

    float aumento = salario * porcentaje; // Calcular el dinero ganado por el aumento
    float nuevoSalario = salario + aumento; // Calcular el nuevo salario
    std::cout << "Salario actualizado: R$" << nuevoSalario << std::endl;
    std::cout << "Dinero ganado: R$" << aumento << std::endl;
    std::cout << "Porcentaje de aumento: " << porcentaje * 100 << "%" << std::endl;
    
    return nuevoSalario; // Devolver el nuevo salario
}

int main() {
    int salario;
    std::cout << "Ingrese el salario del empleado: R$";
    std::cin >> salario;

    // Llamada a la función CalcularSalario y mostrar el resultado
    float nuevoSalario = CalcularSalario(salario);

    return 0;
}

