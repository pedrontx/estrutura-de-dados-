/* Escreva um algoritimo que solicite a quantidades de avaliações no semestre
 de um aluno e ao final apresente se aprovado ou não conforme a média aritimetica das N avaliações
 */
#include<stdio.h>
#include<conio.h>
int main(){
	
	float nota[10];
	int i, qtd;
	nota[0] = 0;
	do {
		printf("\ninforme a quantidade de provas:  ");
		scanf("%i",&qtd);
		if(qtd < 1|| qtd > 10)
			printf("\n Atencaoo!!! Entre 1 e 10!!");	
	}
	while(qtd < 1|| qtd > 10);
	for(i=1; i<=qtd; i++){
		printf("informe a %i. nota do aluno: ",i);
		scanf("%f",&nota[i]);
		//soma = soma + nota[i]; // isso se chama containe; toda vez que vc ver  essa estrutura uma 
		//variavel recebe ela mesmo mais alguma coisa; 
		nota[0]= nota[0]+nota[i]; // a primeira posição do vetor está acumulando a soma das notas
		
	}
	printf("\n A soma das notas: %.2f", nota[0]);
	printf("\n A media das notas: %.2f", (nota[0]/qtd));
}
