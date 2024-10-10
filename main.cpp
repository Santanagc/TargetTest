#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Função auxiliar para verificar se um número é parte da sequência de Fibonacci
bool Fibonacci(int n) {
    // Um número n é Fibonacci se e somente se 5*n^2 + 4 ou 5*n^2 - 4 for um quadrado perfeito
    int x1 = 5 * n * n + 4;
    int x2 = 5 * n * n - 4;
    int sqrt_x1 = sqrt(x1);
    int sqrt_x2 = sqrt(x2);
    return (sqrt_x1 * sqrt_x1 == x1 || sqrt_x2 * sqrt_x2 == x2);
}

// Função que verifica se um número pertence à sequência de Fibonacci
void checkFibonacci(int number) {
    if (Fibonacci(number)) {
        cout << "O número " << number << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << number << " NÃO pertence à sequência de Fibonacci." << endl;
    }
}

// Função que verifica a existência da letra 'a' (maiúscula ou minúscula) e conta quantas vezes ocorre
void countLetterA(string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'A') {
            count++;
        }
    }
    cout << "A letra 'a' ocorre " << count << " vezes na string fornecida." << endl;
}


// Função principal para executar os exemplos
int main() {
    // 1) Verificar se um número pertence à sequência de Fibonacci
    int number = 21; // Número de exemplo
    checkFibonacci(number);

    // 2) Verificar a ocorrência da letra 'a' em uma string
    string str = "Ola mundo!";
    countLetterA(str);

    // 3) Resposta sobre o valor da variável SOMA no código fornecido
    /*
    Resposta: O valor final da variável SOMA será 91, pois o código faz um loop que começa com K=1 e soma K ao valor da variável SOMA, até que K seja igual a 12. 
    Portanto, SOMA será a soma dos números de 1 a 12, ou seja: 1 + 2 + 3 + ... + 12 = 91.
    */

    // 4) Completar a sequência lógica
    /*
    a) 1, 3, 5, 7, ___
        Resposta: 9 (a sequência incrementa de 2 em 2)
   
    b) 2, 4, 8, 16, 32, 64, ____
        Resposta: 128 (cada número é o dobro do anterior)
   
    c) 0, 1, 4, 9, 16, 25, 36, ____
        Resposta: 49 (sequência dos quadrados perfeitos: 0^2, 1^2, 2^2, 3^2, ..., 7^2)
   
    d) 4, 16, 36, 64, ____
        Resposta: 100 (sequência dos quadrados dos números pares: 2^2, 4^2, 6^2, 8^2, 10^2)
   
    e) 1, 1, 2, 3, 5, 8, ____
        Resposta: 13 (sequência de Fibonacci)
   
    f) 2, 10, 12, 16, 17, 18, 19, ____
        Resposta: 20 (sequência dos números que não são múltiplos de 3)
    */

    // 5) Resposta para a lógica dos interruptores e lâmpadas
    /*
        Resposta: A estratégia seria a seguinte:

        1. Ligue o primeiro interruptor e deixe-o ligado por um tempo.
        2. Após alguns minutos, desligue o primeiro interruptor e ligue o segundo interruptor.
        3. Vá até a sala das lâmpadas:
            - Se a lâmpada estiver acesa, corresponde ao segundo interruptor (que está ligado no momento).
            - Se a lâmpada estiver quente, mas apagada, corresponde ao primeiro interruptor (que foi ligado e desligado).
            - Se a lâmpada estiver fria e apagada corresponde ao terceiro interruptor (que não foi ligado).
    */

    return 0;
}