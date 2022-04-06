#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
   int *v, quant = atoi(argv[1]),num;

   v= (int*)malloc(quant*sizeof(int));

   for(int i=0; i<quant;i++){
       v[i]=-1;
   }

   num = 0;

   while (num !=-1){
       scanf("%i",&num);
       if(num==-2){
           printf("Fila: ");
           for (int i =quant-1; i >-1; i--){
               if (v[i] != -1){
                   printf("%i ",v[i]);
               }
           }
           printf("\n");
       }
       else {
           for (int i = quant-1; i >0; i--)
           {
               v[i] = v[i-1];
           }
           v[0] = num;
       }
    }
}