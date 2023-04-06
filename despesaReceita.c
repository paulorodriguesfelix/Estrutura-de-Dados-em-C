#include <stdio.h>

int main()
{
    
    struct{
        float saldo;
        int nProj;
        float valor;
        
    }projeto;
    int despesa;
    float valor;
    
    printf("Digite o valor do saldo Inicial em R$: ");
    scanf("%f", &projeto.saldo);
    printf("Digite o numero do projeto: ");
    scanf("%d", &projeto.nProj);
    printf("Qual o tipo de Despesa 1- Receita || 2- Despesa:");
    scanf("%d", &despesa);
    
    if(despesa == 1){
        printf("Digite o valor a ser acrescentado: R$");
        scanf("%f", &valor);
        projeto.saldo += valor;
        
    } else{
        printf("Digite o valor da despesa: R$ ");
        scanf("%f", &valor);
        projeto.saldo -= valor;
    }
    printf("Número do Projeto: %d\n", projeto.nProj);
    
    printf("Saldo Final: R$ %.2f", projeto.saldo);

return 0;
}