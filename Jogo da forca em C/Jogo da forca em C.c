#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main ()
{
	
	char palavra[30],letra[1],secreta[30];
	int tam,i,chances,acertos;
	bool acerto;
	
	chances = 15;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	setlocale(LC_ALL,"portuguese");
	printf("Fale para seu amigo tampar os olhos e emitir a palavra secreta: ");
	gets(palavra);
	system("cls");
	
	while(palavra[i] != '\0' ){
		i++;
		tam++;
		
	}
	
	for(i = 0; i<30; i++){
		secreta[i]='-';
	}
	
	while((chances > 0)&&(acertos < tam)){
		printf("Chances restantes: %d", chances, "\n\n");
		printf("\n\nPalavra secreta: ");
		for(i=0; i<tam; i++){
			printf("%c", secreta[i]);
		}
		printf("\n\nDigite uma letra: ");
		scanf("%c", &letra[0]);
		for(i=0; i<tam; i++){
			if(palavra[i]== letra[0]){
				acerto = true;
				secreta[i]=palavra[i];
				acertos++;
			}
		}
		if(!acerto)	{
			chances--;
		}
		acerto = false;
		system("cls");	
	}
	if(acertos==tam){
		printf("Voc� venceu! \n\n");
	}else{
		printf("Que pena, voc� perdeu!\n\n");
	}
	
	system("pause");
	
	return 0;
}
