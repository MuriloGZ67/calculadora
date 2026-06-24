#include <math.h>
#include <emscripten.h>

// Função da Soma
EMSCRIPTEN_KEEPALIVE
double calcularSoma(double num1, double num2) {
    return num1 + num2;
}

// Função da Raiz
EMSCRIPTEN_KEEPALIVE
double calcularRaiz(double num1) {
    if (num1 < 0) return -1.0; 
    return sqrt(num1);
}

// Função do Quadrado
EMSCRIPTEN_KEEPALIVE
double calcularQuadrado(double num1) {
    return pow(num1, 2);
}

// Funções de Bhaskara
EMSCRIPTEN_KEEPALIVE
double calcularDelta(double a, double b, double c) {
    return pow(b, 2) - (4 * a * c);
}

EMSCRIPTEN_KEEPALIVE
double calcularX1(double a, double b, double delta) {
    return (-b + sqrt(delta)) / (2 * a);
}

EMSCRIPTEN_KEEPALIVE
double calcularX2(double a, double b, double delta) {
    return (-b - sqrt(delta)) / (2 * a);
}
