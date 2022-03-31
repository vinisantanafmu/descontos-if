#include <stdio.h>

int quantidade;
float unidade, total, comdesconto;

int main() {
    
    printf("\nBem vindo ao checador de descontos da PBQR!\n\n");
    
    printf("Digite a quantidade de produtos adiquiridos:\n");
    scanf("%i", &quantidade);
    
    printf("\n\n Agora digite o preço da unidade:\n");
    scanf("%f", &unidade);
    
    total = quantidade * unidade;
    
    printf("\n\nO valor da total é de R$%.2f\n\n\n", total);
    printf("Agora vamos calcular o desconto!\n\n");
    
    if (quantidade <= 5) {
        printf("Você receberá um desconto de 2 porcento!\n");
        
        comdesconto = total * 0.02;
    }
    else if (quantidade >= 6 && quantidade <= 10) {
        printf("Você receberá um desocnto de 3 porcento!\n");
        
        comdesconto = total * 0.03;
    }
    else if (quantidade > 10) {
        printf("Você receberá um desconto de 5 porcento!\n");
        
        comdesconto = total * 0.05;
    }
    
    comdesconto = total - comdesconto;
    
    printf("Total a pagar: R$%.2f", comdesconto);
    
}
