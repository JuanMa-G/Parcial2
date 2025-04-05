#include "../include/CuentaBancaria.h"
#include <iostream>
#include <string>
using namespace std;

void CuentaBancaria::depositar(float cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
        std::cout << "Deposito exitoso. Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Cantidad a depositar debe ser positiva." << std::endl;
    }
}

void CuentaBancaria::retirar(float cantidad) {
    if (bloqRetiros == true) {
        std::cout << "Retiros bloqueados temporalmente." << std::endl;
        return;
    }
    if ((cantidad <= saldo) && (cantidad > 0)) {
        saldo -= cantidad;
        std::cout << "Retiro exitoso. Nuevo saldo: " << saldo << std::endl;
    } 
    else {
        std::cout << "Cantidad a retirar no válida." << std::endl;
    }
}

void CuentaBancaria::bloquearRetiros(bool bloquear) {
    bloqRetiros = bloquear;
    if (bloqRetiros)
        std::cout << "Los retiros han sido bloqueados." << std::endl;
    else
        std::cout << "Los retiros han sido desbloqueados." << std::endl;
}


float CuentaBancaria::obtenerSaldo(){
    return saldo;
}