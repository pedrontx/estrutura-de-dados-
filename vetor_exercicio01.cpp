/* Escreva um algoritimo que solicite a quantidades de avalia��es no semestre
 de um aluno e ao final apresente se aprovado ou n�o conforme a m�dia aritimetica das N avalia��es
 */
#include<stdio.h>
#include<conio.h>
int main(){
	
	float nota[10], soma, media;
	int i, qtd;
	soma = 0;
	printf("informe a quantidade de provas: ");
	scanf("%i",&qtd);

	for(i=1; i<=qtd; i++){
		printf("informe a %i. nota do aluno: ",i);
		scanf("%f",&nota[i]);
		soma = soma + nota[i]; // isso se chama containe; toda vez que vc ver  essa estrutura uma 
		//variavel recebe ela mesmo mais alguma coisa; 
		
	}
	media = soma/qtd;
	printf("\n A media das soma: %.2f", soma);
	printf("\n A media das notas: %.2f", media);
}
