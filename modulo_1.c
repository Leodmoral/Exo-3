#include "struct.h"

void crearlista(char c, LISTA **inicio, LISTA **aux);
void recorrer(LISTA *inicio);
void invertido(LISTA *aux);
void liberar(LISTA *inicio);


int main(int argn, char *argv[])
{
  char c;
  int opc;
  FILE *fp;
  LISTA *iniciom, *aux;
  
  fp = fopen(argv[1], "r")
    
    if (fp == NULL)
      {
	printf("El archivo no existe");
	exit(1);
      }
  
  while((c = getc(fp)) != EOF)
    {      
      crearlista(c, &incio, &aux);
    }

  fclose(fp);
  
  
  printf("\t\tPara leer los datos en:\n 1)Sentido horario\n 2)Sentido opuesto\n");
  scanf("%d", &opc);
  
    
  if(opc = 1)
    {
      recorrer(inicio);
    }

  if(opc = 2)
    {
      invertido();
    }

  liberar(inicio);
