#include <stdio.h>
#include <string.h>
int main() {
    int num;

    printf("Numeros pares e impares ate 100\n");

    for (num = 1; num <= 100; num++) {
        char est[] = "impar";
        // Declara��o de vari�veis em string devem ser feitas dentro de um array.
        if (num % 2 == 0) {
            strcpy(est, "par");
        // Para redefinir uma vari�vel em string/array, � feito uma c�pia da vari�vel e definido o valor.
        } 
        
        printf("Numero %d = %s \n", num, est);
    }
}
