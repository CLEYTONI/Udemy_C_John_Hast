# include <stdio.h>
# include <stdlib.h>
// # include <stdlib.h>


int main() {
    
    // Definindo uma variavel inteira
    int A = 5, B;
    
    // Concatenação, atribuindo a variavel em uma frase
    printf("O valor de A é: %d", A);
    
    // O /n é usado para quebra de linha colocabdo a proxima informação na linha de baixo
    printf("\n");
    
    printf("Digite um valo para B: ");
    
    
    // Scanf é uma forma de receber valores esperando o usuario digitar
    scanf("%d", &B);
    
    
    printf("O valor de B é: %d", B);
    
    printf("\n");
    // Caso queira concatenar mais de uma variavel é possivel lembrando que a subtituição vai seguir a ordem aqual as variaveis foram informadas
    printf("O valor de A e o de B são respectivamente %d e %d", A, B);
    
    system("pause");
    return 0;
    }