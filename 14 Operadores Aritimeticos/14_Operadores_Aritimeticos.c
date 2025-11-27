# include <stdio.h>	
# include <stdlib.h>


int main() {
    
    printf("Operadores matematicos");
    
    printf("\n");
    
    int one;
    int two;
    int soma;
    int multiplicacao;
    int subtracao;
    int divisao;
    
    printf("Digite um número: ");
    
    scanf("%d", &one);
    
    printf("Digite outro número: ");
    
    scanf("%d", &two);
    
    soma = one + two;
    printf("A soma dos números digitados é %d", soma);
    
    printf("\n");
    
    multiplicacao = one * two;
    printf("A mutiplicação dos números é %d", multiplicacao);
    
    printf("\n");
    
    
    subtracao = one - two;
    printf("A subtração dos números digitados é %d", subtracao);
    
    return 0;
}