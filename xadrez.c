# include <stdio.h>

void torre( int quantidade ){
    if ( quantidade > 0 )
    {   
        printf(" A PEÇA TORRE MOVEU PARA A DIREITA. \n");
        torre( quantidade - 1 );
    }
}

void bispo( int quantidade ){
    if ( quantidade > 0 )
    {
        printf(" A PEÇA BISPO MOVEU PARA CIMA, DIREITA. \n");
        bispo ( quantidade - 1);
    }
    
}


void rainha( int quantidade ){
    if ( quantidade > 0 )
    {
    printf(" A PEÇA RAINHA MOVEU PARA A ESQUERDA. \n");
    rainha( quantidade - 1) ; 
    }
}



int main() {
    torre(5);
    bispo(5);
    rainha(8);
    

    for (int quantidade = 1, valor = 0; quantidade >= valor; quantidade--){
        {
         printf(" O CAVALO MOVEU PARA CIMA. \n");
        }
    if (quantidade == valor)
    {
        printf(" O CAVALO MOVEU PARA A DREITA. \n");
    }
    
    }
}