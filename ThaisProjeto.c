#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1;
	int n2;
	float total;
	

	printf("Escolha qual opera��o ser� efetuada. \n Digite 1 para Subtra��o, 2 para Soma, 3 para Multiplica��o e 4 para divis�o: ");
	scanf("%d, &operacao");
	
	swich(operacao){
		case 1:
			
			printf("Digite o 1� n�mero: ");
			scanf("%d, &n1");
			printf("Digite o 2� n�mero: ");
			scanf("%d, &n2");
			printf("%d + %d=%d",n1,n2,total);
			
	}
	
		
	})
	return 0;
}
