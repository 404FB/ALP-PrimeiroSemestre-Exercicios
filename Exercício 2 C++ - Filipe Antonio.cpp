#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Disciplina : [ALGORITMOS E L�GICA DE PROGRAMA��O]
// Professor : JOS� LUIZ RODRIGUES J�NIOR
// Descri��o : Recebe os valores do tri�ngulo e verifica se ele � v�lido, caso seja v�lido mostra qual � o seu tipo.
// Autor(a) : Filipe Antonio de Oliveira Bega
// Data atual : 13/05/2022
int main ()
{
setlocale(LC_ALL, "Portuguese");
	//Se��o de declara��o das vari�veis
	double L1, L2, L3;
	//Entrada de dados
	printf("Digite o valor do lado 1: ");
	scanf("%lf", &L1);
	printf("Digite o valor do lado 2: ");
	scanf("%lf", &L2);
	printf("Digite o valor do lado 3: ");
	scanf("%lf", &L3);
	//Testa se o tri�ngulo � v�lido
	  if(((L1+L2)<L3)||((L2+L3)<L1)||((L1+L3)<L2)){
		 printf("\nTRI�NGULO N�O � V�LIDO");
      }
	  else 
	//Verifica o tipo do tri�ngulo
	  if((L1==L2)&&(L2==L3)) {
	      printf("\nTRI�NGULO � EQUIL�TERO");
        }
      else 
	    if((L1!=L2)&&(L2!=L3)&&(L1!=L3)) {
	    	printf("\nTRI�NGULO � ESCALENO");	
		}
	   else 
	   	 if ((L1==L2)&&(L1!=L3)||(L2==L3)&&(L2!=L1)||(L1==L3)&&(L1!=L2)) {
	   	 	printf("\nTRI�NGULO � IS�SCELES");
		}
return (0);
} 
