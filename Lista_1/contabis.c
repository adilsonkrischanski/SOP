#include <stdio.h>
#include <stdlib.h>

int binario(int num){
    int resto, resultado = num, quant=1,i, contador=0;
    int *r;

    r = (int*)malloc(sizeof(int)*quant);
    
    while (resultado !=1 && resultado !=0 ){
        r =  (int*)realloc(r, sizeof(int)*quant);
        resto = resultado % 2;
        resultado = resultado/2;
        r[quant-1] = resto;
        quant++;
    }
    
    r =  (int*)realloc(r, sizeof(int)*quant);
    r[quant-1] = resultado;

    for(i=0; i <quant;i++){
        if (r[i]==1){
            contador++;
        }
    }
    return contador;
}

int main( int argc, char *argv[ ])
{
    int  resultado, num = atoi(argv[1]);
    resultado = binario(num);
    printf("\n%i",resultado);
  
    return 0;
}
