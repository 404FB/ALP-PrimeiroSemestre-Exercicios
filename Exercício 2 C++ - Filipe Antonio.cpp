#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Disciplina : [ALGORITMOS E LÓGICA DE PROGRAMAÇÃO]
// Professor : JOSÉ LUIZ RODRIGUES JÚNIOR
// Descrição : Recebe os valores do triângulo e verifica se ele é válido, caso seja válido mostra qual é o seu tipo.
// Autor(a) : Filipe Antonio de Oliveira Bega
// Data atual : 13/05/2022
int main ()
{
setlocale(LC_ALL, "Portuguese");
	//Seção de declaração das variáveis
	double L1, L2, L3;
	//Entrada de dados
	printf("Digite o valor do lado 1: ");
	scanf("%lf", &L1);
	printf("Digite o valor do lado 2: ");
	scanf("%lf", &L2);
	printf("Digite o valor do lado 3: ");
	scanf("%lf", &L3);
	//Testa se o triângulo é válido
	  if(((L1+L2)<L3)||((L2+L3)<L1)||((L1+L3)<L2)){
		 printf("\nTRIÂNGULO NÃO É VÁLIDO");
      }
	  else 
	//Verifica o tipo do triângulo
	  if((L1==L2)&&(L2==L3)) {
	      printf("\nTRIÂNGULO É EQUILÁTERO");
        }
      else 
	    if((L1!=L2)&&(L2!=L3)&&(L1!=L3)) {
	    	printf("\nTRIÂNGULO É ESCALENO");	
		}
	   else 
	   	 if ((L1==L2)&&(L1!=L3)||(L2==L3)&&(L2!=L1)||(L1==L3)&&(L1!=L2)) {
	   	 	printf("\nTRIÂNGULO É ISÓSCELES");
		}
return (0);
} 
