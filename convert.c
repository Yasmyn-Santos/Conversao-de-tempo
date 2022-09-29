#include <stdio.h>

/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/
 
int main() {
    
    int t, h;
    scanf("%d", &t);
    
    h = t/3600;
    t = t-(h*3600);
     
    int m = t/60;
    t = t-(m*60);
    
    printf("%d:%d:%d\n", h,m,t);
 
    return 0;
}
