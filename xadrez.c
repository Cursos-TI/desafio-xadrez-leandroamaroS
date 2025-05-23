# include <stdio.h>

int main () {

int torre = 1;
int bispo = 2;

while (torre <= 5)
{
    printf(" A PEÇA TORRE MOVEU PARA A DIREITA. \n");
 torre++;
}

do
{
 printf(" A PEÇA BISPO MOVEU PARA CIMA, DIREITA. \n");
 bispo++;
} while (bispo <= 6);


for (int rainha = 3; rainha <= 10; rainha++)
{
   printf(" A PEÇA RAINHA MOVEU PARA A ESQUERDA. \n");
}

return 0;

}