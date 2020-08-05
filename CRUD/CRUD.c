#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 0;
	int id;

struct funcionario{
	 int matricula;
	 char nome[20];
	 char departamento[20];
	 float salario;
	 
};

void consultar(struct funcionario func[i]){
	int j=0;
	for (j=0; j<=i; j++){
		setlocale(LC_ALL,"portuguese");
		printf("Funcionario %d\n\n", j+1);
		printf("Matricula = %d\n", func[j].matricula);
		printf("nome = %s \n", func[j].nome);
		printf("Departamento = %s \n", func[j].departamento);
		printf("Salario = %.2f\n", func[j].salario);
		printf("\n--------------------------------------");
		system("pause>null");
		system("cls");
	}
}
void cadastrar(struct funcionario func[]){
	setlocale(LC_ALL,"portuguese");
	if (i<3){
		printf("Digite a matrícula: ");
		scanf("%d", &func[i].matricula);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(func[i].nome);
		printf("Digite o departamento: ");
		fflush(stdin);
		gets(func[i].departamento);
		printf("Digite o salario: ");
		scanf("%f", &func[i].salario);
		printf("Funcionario cadastrado! ");
		system("pause>null");
		system("cls");
		i++;
	}else 
	{
		printf("Banco de dados cheio!");
	}
}
void alterar(struct funcionario func[]){
	system("cls");
	printf("Digite o Nº do funcionario a ser alterado: ");
	scanf("%d", &id);
	
		printf("Digite a matrícula: ");
		scanf("%d", &func[id].matricula);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(func[id].nome);
		printf("Digite o departamento: ");
		fflush(stdin);
		gets(func[id].departamento);
		printf("Digite o salario: ");
		scanf("%f", &func[id].salario);
		printf("Funcionario cadastrado! ");
		system("pause>null");
		system("cls");
		
		func[i] = func[id];
			
	}
	
void deletar(struct funcionario func[]){
char i;
printf("Digite o Nº do funcionario a ser deletado: ");
scanf("%c", &i);

func[i].matricula = "";
func[i].nome = "";
func[i].departamento = "";
func[i].salario = "";
	
	
}



main(){
setlocale(LC_ALL,"portuguese");
	struct funcionario func[3];
	int opc;
	
	do{
		printf("Sistema de cadastro do funcionario \n\n");
		printf("1 - CADASTRAR\n");
		printf("2 - CONSULTAR\n");
		printf("3 - ALTERAR\n");
		printf("4 - DELETAR\n");
		printf("5 - SAIR\n\n");
		printf("Opção: ");
		scanf("%d", &opc);
			switch(opc){
				case 1: cadastrar(func); break;
				case 2: consultar(func); break;
				case 3: alterar(func); break;
				case 3: deletar(func); break;
				case 5: printf("Tchau!!!"); break;
				default: printf("Opcao invalida!");
			}
		}while(opc!=5);
}
