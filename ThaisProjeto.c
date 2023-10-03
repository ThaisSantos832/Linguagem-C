#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1;
	int n2;
	float total;
	

	printf("Escolha qual operação será efetuada. \n Digite 1 para Subtração, 2 para Soma, 3 para Multiplicação e 4 para divisão: ");
	scanf("%d, &operacao");
	
	swich(operacao){
		case 1:
			
			printf("Digite o 1° número: ");
			scanf("%d, &n1");
			printf("Digite o 2º número: ");
			scanf("%d, &n2");
			printf("%d + %d=%d",n1,n2,total);
			
	}
	
		
	})
	return 0;
}
