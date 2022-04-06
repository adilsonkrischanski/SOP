# include <stdio.h>
# include <stdlib.h>

typedef struct Listas Listas;


struct Listas
{
    char name[30];
    int prioridade;
};

int main(void){
    Listas *p;
    int quant =1;
    

    p = (Listas *)(malloc(sizeof(Listas)*quant));

    while(1){

        scanf(" %s", p[quant-1].name);

        if(p[quant-1].name[0] == 'F' && p[quant-1].name[1]=='I'  && p[quant-1].name[2] == 'M'){
            quant --;
            break;
        }

        scanf("%i",&p[quant-1].prioridade);
         
        if(p[quant-1].name[0] == 'I' && p[quant-1].name[1]=='G'  && p[quant-1].name[2] == 'U' && p[quant-1].name[3] == 'A' && p[quant-1].name[4] == 'L'){
            for(int i=0;i<quant;i++){
                if (p[i].prioridade == p[quant-1].prioridade){
                    printf("%s ",p[i].name);
                }
            }
            quant --;

        }
        if(p[quant-1].name[0] == 'M' && p[quant-1].name[1]=='E'  && p[quant-1].name[2] == 'N' && p[quant-1].name[3] == 'I' && p[quant-1].name[4] == 'N' && p[quant-1].name[5] == 'G'){
             for(int i=0;i<=quant;i++){
                if (p[i].prioridade <= p[quant-1].prioridade){
                    printf("%s ",p[i].name);
                }
            }
            quant --;
        }

        quant++;
        p=(Listas*)realloc(p, sizeof(Listas)*(quant));
        

    }

    return 0;
}
