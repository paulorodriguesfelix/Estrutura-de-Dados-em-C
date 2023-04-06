#include <stdio.h>
int rece(int a, int b){
    int resultado = a+b;
    return resultado;
}
int desp(int a, int b){
    int resultado = a-b;
    return resultado;
}

int main()
{
    
    struct{
        char nomeProj [50];
        float saldo;
        int numProj;
        int tipo;
        float valor;
        
    }projeto;
    
    
    printf("Digite o nome do Projeto: ");
    scanf("%s", projeto.nomeProj);
    printf("Digite o valor do saldo Inicial em R$: ");
    scanf("%f", &projeto.saldo);
    printf("Digite o numero do projeto: ");
    scanf("%d", &projeto.numProj);
    printf("Digite 1- Receita || 2- Despesa:\n");
    scanf("%d", &projeto.tipo);
    printf("Saldo:R$ %.2f\n", projeto.saldo);
    
    if(projeto.tipo == 1){
        printf("Digite o valor a ser acrescentado: R$");
        scanf("%f", &projeto.valor);
        projeto.saldo = rece(projeto.valor, projeto.saldo);
        
    } else{
        printf("Digite o valor da despesa: R$ ");
        scanf("%f", &projeto.valor);
        projeto.saldo =desp(projeto.saldo, projeto.valor);
    }
    
    printf("Projeto Nº: %d\n", projeto.numProj);
    printf("Nome: %s\n", projeto.nomeProj);
    printf("Saldo Final: R$ %.2f", projeto.saldo);

return 0;
}
