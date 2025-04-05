#include "../src/CuentaBancaria.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    
    float cantidad;
    std::string numeroCuenta;

    std::vector<std::string> numerosDeCuenta;
    std::vector<CuentaBancaria> cuentas;

    std::cout << "¡Gracias por elegirnos para abrir su nueva cuenta! Ingrese su nuevo número de cuenta: ";
    std::cin >> numeroCuenta;
    numerosDeCuenta.push_back(numeroCuenta);
    CuentaBancaria cuenta1(numerosDeCuenta[0], 0);

    std::cout << "El número de cuenta ingresado es: " << numerosDeCuenta[0] << std::endl;
    std::cout << "Realicemos su primera consignación. Ingrese la cantidad a depositar: ";
    std::cin >> cantidad;
    cuenta1.depositar(cantidad);
    std::cout << "¡Gracias por utilizar nuestros servicios!..." << std::endl;;
    
    std::cout << "...¡Gracias por elegirnos para abrir su nueva cuenta! Ingrese su nuevo número de cuenta: ";
    std::cin >> numeroCuenta;
    numerosDeCuenta.push_back(numeroCuenta);
    CuentaBancaria cuenta2(numerosDeCuenta[1], 0);
    std::cout << "El número de cuenta ingresado es: " << numerosDeCuenta[1] << std::endl;
    std::cout << "Realicemos su primera consignación para activar el paquete especial, luego puede retirar el dinero que ingresó. Ingrese la cantidad a depositar: ";
    std::cin >> cantidad;
    cuenta2.depositar(cantidad);
    std::cout << "Ahora realicemos su primer retiro. Ingrese la cantidad a retirar: ";
    std::cin >> cantidad;
    cuenta2.retirar(cantidad);
    std::cout << "¡Gracias por utilizar nuestros servicios!..." << std::endl;;

    std::cout << "...¡Gracias por elegirnos para abrir su nueva cuenta! Ingrese su nuevo número de cuenta: ";
    std::cin >> numeroCuenta;
    numerosDeCuenta.push_back(numeroCuenta);
    CuentaBancaria cuenta3(numerosDeCuenta[2], 10000);
    std::cout << "El número de cuenta ingresado es: " << numerosDeCuenta[2] << std::endl;
    std::cout << "Además, como regalo por abrir su cuenta, le hemos depositado $10,000.00 en su cuenta." << std::endl;
    std::cout << "Para hacer válido el regalo, es necesario realizar un bloqueo y desbloqueo de retiros. Vamos a realizar el bloqueo." << std::endl;
    cuenta3.bloquearRetiros(true);
    std::cout << "El bloqueo se ha realizado correctamente, comprobemos... Ingrese la cantidad a retirar: " << std::endl;
    std::cin >> cantidad;
    cuenta3.retirar(cantidad);
    std::cout << "Ahora vamos a desbloquear los retiros." << std::endl;;   
    cuenta3.bloquearRetiros(false); 
    std::cout << "El desbloqueo se ha realizado correctamente, comprobemos... Ingrese nuevamente la cantidad a retirar: " << std::endl;
    std::cin >> cantidad;
    cuenta3.retirar(cantidad);
    std::cout << "¡Gracias por utilizar nuestros servicios!..." << std::endl;

    std::ofstream reporte("reporte_saldos.txt");
    if (reporte.is_open()) {
        reporte << "Reporte de saldos de usuarios:\n";
        reporte << "Cuenta " << numerosDeCuenta[0] << ": $" << cuenta1.obtenerSaldo() << "\n";
        reporte << "Cuenta " << numerosDeCuenta[1] << ": $" << cuenta2.obtenerSaldo() << "\n";
        reporte << "Cuenta " << numerosDeCuenta[2] << ": $" << cuenta3.obtenerSaldo() << "\n";
        reporte.close();
        std::cout << "Se generó un reporte de los saldos de cada cuenta" << std::endl;
    }
    else {
        std::cerr << "Error al generar el reporte.\n";
    }

    return 0;
}
