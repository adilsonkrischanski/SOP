#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n=0,cont=0,aux;
    float dp, media,soma=0.0,somatorio=0.0;

    FILE *arq;
    arq = fopen("resultados_a.txt", "w");
    scanf("%i",&n);
    while(n!=-1){
        fprintf(arq,"%i\n",n);
        cont++;
        soma +=n;
        scanf("%i",&n);
    }

    media = soma/cont;
    fclose(arq);
    arq = fopen("resultados_a.txt", "r");

    for(int j=0;j<cont;j++){
        fscanf(arq, "%d",&aux);
        printf("%i",aux);
        somatorio += (aux-media)*(aux-media);

    }
    dp = sqrt(somatorio/cont);

    fclose(arq);

    printf("Media = %.2f\n",media);
    printf("Dp = %.2f\n",dp);

    return 0;
}