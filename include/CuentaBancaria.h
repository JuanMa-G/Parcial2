/**
 * @brief Clase de cuenta bancaria.
 * @author Juan Manuel Gómez y Jeimmy Andrea Gonzalez 
 * @date 2025-04-04
 *
 * La clase `CuentaBancaria` representa una cuenta bancaria simple que permite realizar operaciones de depósito, retiro y bloqueo de retiros.
 */

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H
#include <iostream>
#include <string>

class CuentaBancaria {
private:
    std::string numeroCuenta;
    float saldo;
    bool bloqRetiros = false;

public:
    // Constructor
    /**
     * @brief Constructor de la clase CuentaBancaria.
     * @param numCuenta Número de cuenta.
     * @param saldoInicial Saldo inicial de la cuenta.
     */
    CuentaBancaria(std::string numCuenta, float saldoInicial) : numeroCuenta(numCuenta), saldo(saldoInicial) {}

    // Getters & Setters
    /**
     * @brief Deposita una cantidad en la cuenta.
     * @param cantidad Cantidad a depositar.
     */
    void depositar(float cantidad);

    /**
     * @brief Retira una cantidad en la cuenta.
     * @param cantidad Cantidad a retirar.
     */
    void retirar(float cantidad);

    /**
     * @brief Bloquea o desbloquea los retiros de la cuenta.
     * @param bloquear true para bloquear los retiros, false para desbloquear los retiros.
     */
    void bloquearRetiros(bool bloquear);

    /**
     * @brief Obtiene el saldo actual de la cuenta.
     * @return Saldo actual de la cuenta.
    */
    float obtenerSaldo();

};

#endif