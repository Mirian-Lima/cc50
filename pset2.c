#include <cc50.h>
#include <stdio.h>

int main(void)
{
	int garrafas = 10;
	while (garrafas > 0) 
	{
		printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, ", garrafas);
		garrafas--;
	    if (garrafas == 1) 
		{
			printf("%d garrafa no muro...\n", garrafas);
			printf("1 garrafa de cerveja no muro, bebo uma, jogo no lixo...\nEssa música é tão irritante....que o programa parou.\n");
			return 1;
		}
		    printf("%d garrafas no muro...\n", garrafas);
	}
}
