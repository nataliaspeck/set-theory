#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 0a");
	int vetA[100], vetB[100], vetC[200];
	int opcao, item, i, j, encontrado = 0, indiceA = 0, indiceB = 0, indiceC = 0, repetido = 0;
	char AouB;

	do{
		printf ("1. Inserir os valores\n");

	    printf ("2. Limpar vetor\n");

	    printf ("3. Imprimir os valores\n");

	    printf ("4. União dos vetores\n");

	    printf ("5. Intersecção dos vetores\n");

	    printf ("6. Diferença de vetores\n");

	    printf ("7. Contido\n");

	    printf ("0 ou outro caractere para Sair\n");

	    printf ("Digite a opção desejada: ");
	    scanf ("%d", &opcao);
	    system("clear||@cls"); // Limpa a tela após escolha no menu

	    if(opcao == 1){ // Opção 1.
	    	printf ("Escolha A ou B: ");
			scanf ("\n%c", &AouB);
			// Inicio vetor A.
			if (AouB == 'A' || AouB == 'a'){
				if (indiceA < 100){ // Checagem para ver se o vetor está cheio.
	    			do{
	    				printf ("Insira o item #%d: ", indiceA+1); // Inserção de valores dentro do vetor.
	    				scanf ("%d", &item);
	    				for (i = 0; i < indiceA; i++){ // Enquanto o contador for menor que o valor do vetor.
	    					if (item == vetA[i]){ // Se o item inseido for igual ao valor do vetor.
	    						repetido = 1; // O numero repetido vai ser verdadeiro.
	    						printf ("Não podem ser inseridos valores repetidos.\n");
	    						break;
	    					}
	    				}
	    				if (item != 0 && repetido == 0){ // Checando.
	    					vetA[indiceA] = item;
	    					indiceA++;
	    				}// Fim if.
	    				repetido = 0; // Zerando o contador de A novamente.


	    			}while (item != 0); // Condição de parada é o zero.
				}else{
					printf ("O vetor A está cheio!\n"); // Se o vetor estiver cheio ele não entrará no looping e mostrará esta mensagem.
				}
			}else if (AouB == 'B' || AouB == 'b'){
				if (indiceB < 100){
					do{
	    				printf ("Insira o item #%d: ", indiceB+1); // Inserção de valores dentro do vetor.
	    				scanf ("%d", &item);
	    				for (i = 0; i < indiceB; i++){
	    					if (item == vetB[i]){ // Se o item inseido for igual ao valor do vetor.
	    						repetido = 1; // O numero repetido vai ser verdadeiro.
	    						printf ("Não podem ser inseridos valores repetidos.\n");
	    						break;
	    					}
	    				}
	    				if (item != 0 && repetido == 0){ // Checando.
	    					vetB[indiceB] = item;
	    					indiceB++;
	    				}// Fim if B.
	    				repetido = 0; // Zerando o contador de B novamente.

	    			}while (item != 0);
				}else{
					printf ("O vetor B está cheio!\n"); // Se o vetor estiver cheio ele não entrará no looping e mostrará esta mensagem.
				}
			}else{
				printf("Escolha inválida!\n");
			}
		}else if(opcao == 2){ // Opção 2.
			printf("Escolha A ou B: "); // Escolher vetor para zerar.
			scanf("\n%c", &AouB);
			if(AouB == 'A' || AouB == 'a'){
				indiceA = 0; // Ao retornar o indice para 0, o vetor esta virtualmente vazio.
				printf("Vetor A limpo.\n");
			}else if(AouB == 'B' || AouB == 'b'){
				indiceB = 0;
				printf("Vetor B limpo.\n");
			}else{
				printf("Escolha inválida!\n"); // Caso o usuário tecle qualquer outra entrada.
			}
		}else if (opcao == 3){ // Opção 3. Esta opção é para exibição de todos os valores do conjunto.
			if (indiceA == 0){ // Se o indice A for igual a 0, está vazio.
				printf("O vetor A está vazio.\n");
			}else{
				printf("Vetor A.\n");
				for (i = 0; i < indiceA; i++){
					printf ("%d\n", vetA[i]); // Printando o vetor A.
				}
			}
			if (indiceB == 0){ // Se o indice B for igual a 0, está vazio.
				printf("O vetor B está vazio.\n");
			}else{
				printf("Vetor B.\n");
				for (i = 0; i < indiceB; i++){
					printf ("%d\n", vetB[i]); // Printando o vetor B.
				}
			}
		}else if (opcao == 4){ // União, opção 4.
			printf("União de A e B\n");
			indiceC = 0; // inicia o indice com 0 a cada loop.
			for (i = 0; i < indiceA; i++){  
				vetC[i] = vetA[i]; // vetor C recebe o vetor A.
				indiceC++; // incrementando o indice.
			}
			for (i = indiceA; i < indiceA + indiceB; i++){   
				repetido = 0; // Inicia com 0 a cada loop.
				for (j = 0; j < indiceA; j++){
					if (vetB[i - indiceA] == vetA[j]){ 
						repetido = 1;
						break;
					}
				}
				if (repetido == 0){ // Se o repetido for falso, ele entra na união.
					vetC[indiceC] = vetB[i - indiceA];
					indiceC++;
				}  
			}
			for (i = 0; i < indiceC; i++){    
				printf ("%d\n", vetC[i]); // Printando a união entre os vetores.
			}
			if (indiceA == 0 && indiceB == 0){
				printf ("Conjunto vazio\n");
			}
		
		}else if (opcao == 5){ // Intersecção, opção 5.
			printf("Intersecção entre A e B\n");
			indiceC = 0; // Inicia com 0 a cada loop.
			for (i = 0; i < indiceA; i++){
				for (j = 0; j < indiceB; j++){
					if (vetA[i] == vetB[j]){ 
						vetC[indiceC] = vetA[i];
						indiceC++; 
						break;
					}
				}
			}
			for (i = 0; i < indiceC; i++){
				printf ("%d\n", vetC[i]);
			}
			if (indiceA == 0 && indiceB == 0){
				printf ("Conjunto vazio\n");
			}
		}else if (opcao == 6){ // Diferenca, opção 6.
			printf ("Diferença\n");
			printf ("1. A - B\n");
			printf ("2. B - A\n");
			printf (">> ");
			scanf ("%d", &item);
			indiceC = 0;
			if (item == 1){ 
				for (i = 0; i < indiceA; i++){
					repetido = 0;
					for (j = 0; j < indiceB; j++){
						if (vetA[i] == vetB[j]){ // Se o valor do vetor A for igual ao valor do vetor B.
							repetido = 1; // Será verdadeiro e ele sairá do loop.
							break;
						}
					}
					if (repetido == 0){ // Se for falso, ele irá igualar vetC a vetA e incrementar o índice.
						vetC[indiceC] = vetA[i];
						indiceC++;
					}
				}
				for (i = 0; i < indiceC; i++){
					printf ("%d\n", vetC[i]); // Printando o resultado entre a diferença dos vetores.
				}
			}else if (item == 2){
				for (i = 0; i < indiceB; i++){
					repetido = 0;
					for (j = 0; j < indiceA; j++){
						if (vetB[i] == vetA[j]){ // Se o vetor B conter valores de A, os vetores tem algo em comum, então ele irá interromper.
							repetido = 1;
							break;
						}
					}
					if (repetido == 0){ 
						vetC[indiceC] = vetB[i]; // Se for falso, ele irá armazenar dentro do vetor C
						indiceC++; // E implementar o indice para próxima casa.
					}
				}
				for (i = 0; i < indiceC; i++){
					printf ("%d\n", vetC[i]); // Printando o resultado da difenrença entre os vetores.
				}
			}else{
				printf ("Escolha inválida.\n");
			}
			if (indiceA == 0 && indiceB == 0){
				printf ("Conjunto vazio\n");
			}
		}else if(opcao == 7){ // Contido, opção 7.
			printf ("Contido\n");
			printf ("1. A contido em B\n");
			printf ("2. B contido em A\n");
			printf (">> ");
			scanf ("%d", &item);
			if (item == 1){
				for (i = 0; i < indiceA; i++){
					encontrado = 0;
					for (j = 0; j < indiceB; j++){
					 	if (vetA[i] == vetB[j]){
					 		encontrado = 1; // Se for verdadeiro, ele vai para o próximo.
					 		break;
					 	}
					 }
					 if(encontrado == 0){ // Se o loop não for verdadeiro alguma vez, ele não estará contido e emitirá a mensagem.
					 	printf("A não está contido em B.\n");
					 	break;
					 }
				}
				if(encontrado == 1){
					printf("A está contido em B.\n"); // Se sempre for verdadeiro, no final ele printará a mensagem.
				}

			}else if (item == 2){
				for (i = 0; i < indiceB; i++){
					encontrado = 0;
					for (j = 0; j < indiceA; j++){
					 	if (vetB[i] == vetA[j]){
					 		encontrado = 1;
					 		break;
					 	}
					 }
					 if(encontrado == 0){
					 	printf("B não está contido em A.\n");
					 	break;
					 }
				}
				if(encontrado == 1){
					printf("B está contido em A.\n");
				}
			}else{
				printf ("Escolha inválida.\n");
			}
			if (indiceA == 0 && indiceB == 0){
				printf ("A e B são conjuntos vazios\n");
			}
		}
		
		if(opcao >= 1 && opcao <= 7){
			printf ("Pressione Enter para mostrar o menu..."); // Opção para deixar a visualização mais limpa.
			getchar(); // Espera o Enter do usuário para retornar ao menu.
			getchar();
		}
	}while (opcao >= 1 && opcao <= 7);// Enquanto a opção escolhida pelo usuário estiver entre 1 e 7.

return 0;
}
