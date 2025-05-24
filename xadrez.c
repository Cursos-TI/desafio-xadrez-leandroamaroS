# include <stdio.h>

int main () {

int torre = 1;
int bispo = 2;

while (torre <= 5)
{
    printf(" A PEÇA TORRE MOVEU PARA A DIREITA. \n");
 torre++;

 
}
printf("\n");


do
{
 printf(" A PEÇA BISPO MOVEU PARA CIMA, DIREITA. \n");
 bispo++;
} while ( bispo <= 6);
printf("\n");


for (int rainha = 1; rainha <= 8; rainha++)
{
   printf(" A PEÇA RAINHA MOVEU PARA A ESQUERDA. \n");
}

printf("\n");


for (int cavalo = 1; cavalo <= 2 ; cavalo++){

   printf(" A PEÇA CAVALO MOVEU PARA BAIXO. \n");
   while (cavalo == 2 )

   {
     printf(" A PEÇA CAVALO MOVEU PARA ESQUERDA. \n");

     cavalo++;

   }
  
}
printf("\n");



return 0;

}