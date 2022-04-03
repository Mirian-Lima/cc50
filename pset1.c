
#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int skittles;   
    /*Recebe o valor semente*/
    srand(time(NULL));
    /*Escolhe um número aleatório*/
    skittles = rand () % 1024;
    printf("Olá, sou a Ana a sua máquina de doces inteligente, quero que você acerte quantos doces eu tenho.\nDica tenho de 0 a 1024 doces, acerte e ganhe doces grátis: \n");
    scanf("%d");
    if (skittles <= 460)
    {
        printf("Parabéns você ganhou 100 doces grátis",skittles);
    }
    else 
    {
        printf("Você não acertou, tente novamente...\n",skittles);
    }
    
    

   
}





