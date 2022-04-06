#include <stdio.h>

int main( int argc, char *argv[ ] )
{
  int cont;
  printf("programa: %s\n",argv[0]);

  printf("Parametros:\n");

  for(cont = argc-1; cont >= 1; cont--){
      printf("%s\n", argv[cont]);
    }
  return 0;
}