#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
	
	char palavra[30],letra[1],secreta[30];
	int tam,i,chances,acertos;
	bool acerto;
	
	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	printf("Fale para seu amigo tampar os olhos e emitir a palavra secreta: ");
	scanf("%c", &palavra);
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
		printf("Palavra secreta: ");
		for(i=0; i<tam; i++){
			printf("%s", secreta[i]);
		}
		printf("\n\nDigite uma letra: ");
		scanf("%s", &letra[0]);
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
	if(acertos=-tam){
		printf("Você venceu");
	}else{
		printf("Que pena, você perdeu!");
	}
	
	system("pause");
	
	return 0;
}
