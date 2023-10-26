#include <stdio.h>

//void q1() {
//	for (int i = 1; i <= 100; i++){
//		printf("%d ", i);
//	}
//}
//
//void q2() {
//	for (int i = 100; i > -1; i-=2){
//		printf("%d ", i);
//	}
//}
//
//void q3() {
//	for (int i = 0; i < 501; i+=5){
//		printf("%d ", i);
//	}
//}
//
//void q5() {
//	int x, y, r;
//	
//	printf("Digite o multiplicador: ");
//	scanf("%d", &y);
//	
//	printf("Digite o multiplicando: ");
//	scanf("%d", &x);
//	
//	while (x > y){
//		printf("O multiplicando deve ser menor que o multiplicador\n");
//		printf("Digite o multiplicando: ");
//		scanf("%d", &x);
//	}
//	
//	r = x * y;
//	
//	printf("A multiplicacao entre %d e %d e: %d", x, y, r);
//
//}
//
void q9() {
	
	int age, op, count = 0, sum, peopleRegular, peopleGood;
	
	do {
		
		printf("Digite a sua idade: ");
		scanf("%d", &age);
		printf("Escolha uma das opcoes \n1) Regular\n2) Bom\n3)Excelente\n");
		scanf("%d", &op);
		
		switch (op) {
			case 1:
				peopleRegular++;
			case 2:
				peopleGood++;
			case 3:
				sum += age;
		}
		
		count++;
		
	} while (count < 20);
	
	printf("Quantidade de pessoas que responderam regular: %d\n", peopleRegular);
	printf("Quantidade de pessoas que responderam bom: %d", peopleGood);
	
}

//void q11() {
//	int num, count = 0;
//	
//	do {
//		printf("Digite um numero ou 0 para encerrar: ");
//		scanf("%d", &num);
//		
//		if (num >= 100 && num <= 200) {
//			count++;
//		} 
//	} while (num != 0);
//	
//	printf("A quantidade de numero entre 100 e 200 foram: %d", count);
//}

void q12() {
	
}

void q15() {
	int age = -1, count21, count50;
	
	while (age != "Sair" || age != "sair") {
		printf("Digite uma idade ou escreva 'Sair': ");
		scanf("%d", &age);
		if (age >= 0 && age < 21) {
			count21++;
		} else {
			count50++;
		}
	}
	
	printf("O numero de pessoas com menos de 21 anos de idade e: %d\n", count21);
	printf("O numero de pessoas com mais de 50 anos de idade e: %d\n", count50);
	
}

int main() {
	//q1();
	//q2();
	//q3();
	//q5();
	//q9();
	//q11();
	q15();
	return 0;
}
