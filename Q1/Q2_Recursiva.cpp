/**
 * @file Q2_Recursiva.cpp
 * @brief Questão 2 - LP I - Fibonacci Recursivo
 * @author Douglas Felipe de Lima Silva (20220054131)
 * @since 01/04/2023
 * @date 03/0/2023
*/

//Iniciando funções utilizadas no código (Se necessário)
int recTribonacci(int n);

//Cabeçalho (INCLUIR AS BIBLIOTECAS)
#include <iostream> //incluir já por padrão
using namespace std; // P/ evitar repetições do sts


/**
 * @brief Função principal do programa
 * @details Solicita ao usuário um numero para aplicar a função recursiva
 * e calcular  o "n" termo correspondente na sequencia de Tribonacci
 * @return o "n" termo da sequencia de Tribonacci
*/ 

int main() {
    int n;

    cout << "Informe um número n: ";

    cin >> n;

    cout << "O termo" << n << " da sequencia tribonacci eh " << recTribonacci(n) << endl;

    return 0;
}

/**
 * @brief Função que calcula recursivamente o "n" termo da sequencia de Tribonacci
 * @details A função recebe um numero inteiro e calcula o "n" termo da sequencia de Tribonacci, existem excessões caso sejam
 * sejam inseridos os valores 0, 1 ou 2, correspondente ao if e else if, e o else é o calculo iterativo
 * @return  o "n" termo da sequencia de Tribonacci
*/ 

int recTribonacci(int n) 
{
    if (n == 0 || n == 1)
     {
        return 0;
    }
    else if (n == 2)
     {
        return 1;
    }
    else 
    {
        return recTribonacci(n - 1) + recTribonacci(n - 2) + recTribonacci(n - 3);
    }
}