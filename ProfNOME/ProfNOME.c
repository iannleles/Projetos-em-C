#include<stdio.h>
#include<stdlib.h>
main(){
char nome[20];
int indice=0;
printf("Digite o nome: ");
gets(nome);
indice=0;
for(indice=0;nome[indice]!='\0';indice++);
indice--;
while(indice>=0){
	printf("%c",nome[indice]);
	indice--;
}
system("pause>null");
}

