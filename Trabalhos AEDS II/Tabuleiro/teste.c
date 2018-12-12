#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max 10

typedef struct {

   int n;
   char T[max][max];
  
} Tabuleiro;

void SetTamanho (Tabuleiro *T, int num)
{
	int i, j;
	T->n = num;
}

void SetElemento (Tabuleiro *T, int i, int j, char c)
{
  T->T[max][max];
}

char GetElemento (Tabuleiro T, int i, int j)
{
  printf("Digite a posição i e j que deseja acessar:");
  scanf("%i%i", &i, &j);

  printf("matriz[%d][%d] = %c\n",i, j, T.T[i-1][j-1]);
}

void MarcaTodos (Tabuleiro *T, char c)
{
int i, j;
T->T[max][max];
}

int main() {

	int i, j, num, pos1, pos2;
  char c;

printf("Diga o número de linhas e colunas da matriz:");
scanf("%i", &num);

Tabuleiro matriz;

SetTamanho(&matriz, num);

 for (i=0; i<matriz.n; i++)
  {
    for (j=0; j<matriz.n; j++)
    {
    printf("Digite o valor da posicao [%d][%d] para a matriz:", i+1, j+1);
    scanf(" %c", &matriz.T[i][j]);
    }
  }

  /*Imprime a matriz resultante*/
  for (i=0; i<matriz.n; i++)
  {
    for (j=0; j<matriz.n; j++)
    {
    printf("%c\t", matriz.T[i][j]);
    }
    printf("\n");
  }

  SetElemento(&matriz, i, j, c);

  printf("Digite a posição i e j que deseja colocar c:");
  scanf("%i%i", &pos1, &pos2);

  printf("matriz[%d][%d] = %c\n",pos1, pos2, matriz.T[pos1-1][pos2-1]='c');

  GetElemento(matriz, pos1, pos2);

  SetTamanho(&matriz, c);

  MarcaTodos(&matriz, c);

  printf("\n");
  for (i=0; i<num; i++)
  {
    for (j=0; j<num; j++)
    {
        printf(" %c", matriz.T[i][j]='c');
    }
    printf("\n");
  }
  
	return 0;
}