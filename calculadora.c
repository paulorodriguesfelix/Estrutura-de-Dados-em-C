#include <stdio.h>

int soma(int a, int b){
    int resultado = a+b;
    return resultado;
    }
    int sub(int a, int b){
    int resultado = a-b;
    return resultado;
    }
    int mult(int a, int b){
    int resultado = a*b;
    return resultado;
    }
    int divi(int a, int b){
    int resultado = a/b;
    return resultado;
    }

    
int main(){
    int x;
    int y;
    int res;
    int op;
    printf("\n\nQUAL OPERAÇÃO DESEJA UTILIZAR: ");
    printf("\n\nDIGITE 1-SOMA | 2- SUBTRAÇÃO | 3- MULTIPLICAÇÃO | 4- DIVISÃO\n");
    scanf("%d",&op);
    printf("\n Digite o primeiro valor: ");
    scanf("%d",&x);
    printf("\n Digite o psegundo valor valor: ");
    scanf("%d",&y);
    
    switch (op){
    case 1:
    res = soma(x,y);
    printf("Resultado: %d",res);
    break;
     case 2:
    res = sub(x,y);
    printf("Resultado: %d",res);
    break;
     case 3:
    res = mult(x,y);
    printf("Resultado: %d",res);
    break;
     case 4:
    res = divi(x,y);
    printf("Resultado: %d",res);
    break;
    default:
    printf("Opção inválida !!");
    break;
    
    
}
}