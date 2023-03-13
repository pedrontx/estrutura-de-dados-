// Escreva um algoritimo que solicite as três notas de um aluno e ao final apresente se aprovado ou não 

#include<stdio.h>
#include<conio.h>
int main(){
	float n1, n2, n3, media;
	printf("informe a 1. nota do aluno: ");
	scanf("%f",&n1);
	printf("Informe a 2. nota do aluno: ");
	scanf("%f",&n2);
	printf("Informe a 3. nota do aluno: ");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	printf("A media das notas: %.2f", media);
}
