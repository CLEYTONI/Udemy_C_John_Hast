// Bibliotecas que são principais e obrigatorias para todo código
# include <stdio.h>
# include <stdlib.h>
// Bbiblioteca que permiti usar o portugues
# include <locale.h>

// Main é a função principal e ninicial de todo programa
int main() {
    // Intancia e pedi para usar a linguagem do sistema com essa função
    setlocale(LC_ALL, "");

    // função para imprimir na tela
    // printf("Olá Mundo");

    int a = 50; // Para iniciar uma variavel mencionamos o seu tipo no inicio seguido de seu rtermo e com  =  inserimos seu valor
    // A sequancia de caractere %d serve para substituir o valor da variavel após a virgula
    // Lembrando que essa %d é para tipos int(inteiros)
    printf("O valor de A é = %d \n", a);

    // O \n serve para efetura uma quebra de linha passando o proxiumo impressão para a linha de baixo
    printf("Digite um novo valor: ");

    // scanf é inputar um valor usando um d% para mencionar a variavel e &+variavel é para mundança de valor em uma variavel
    // Seria tipo no endereço da variavel (&) mude o valor para o digitado
    scanf("%d", &a);
    printf("O valor de A mudou para %d \n", a);


    float b = 5.5; // Float para números com ponto 
    printf("O valor de B  é = %f \n", b); // Usamos %f para floats na hora de menciona-lós
    printf("Digite um novo valor para B: ");
    scanf("%f", &b);
    printf("O valor de B mudou para %f", b);

    char letra = 't'; // Char para letras e caracteres
    printf("O valor de C é = %c \n", letra); // Usamos %c para char na hora de menciona-lós
    printf("Digite um valor para C: ");
    // um buffer é uma região de memória temporária usada para armazenar 
    // dados enquanto são transferidos de um lugar para outro.
    fflush(stdin); // Limpa o buffer para receber o novo valor
    scanf("%c", &letra);
    printf("O valor de C  mudou para %c", letra);

    printf("\n");

    system("pause");

    return 0;
       
}
