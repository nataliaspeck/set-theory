# CONJUNTOS
Implementação de um algoritmo em linguagem C que utiliza vetores para a representação de conjuntos, ou seja, coleções de valores distintos entre si. O algoritmo implementa uma espécie de calculadora na qual o usuário informa os valores para dois conjuntos e os manipula através de diversas operações relacionais. 

O algoritmo deve oferece um menu de texto que dispõe das seguintes operações:

1. Inserção de valores em um conjunto: nesta operação, o usuário escolhe o conjunto (A
ou B) e insere os valores. 

a) O vetor que implementa cada conjunto deve ser de tipo inteiro;

b) O usuário pode inserir vários valores na sequência. É utilizado um
critério de parada (o valor zero);

c) O algoritmo verifica se o valor já foi inserido, evitando a inserção de valores
repetidos (pois um conjunto deve conter valores distintos entre si).

2. Remoção de todos os valores de um conjunto: novamente, o usuário escolhe de qual
dos conjuntos quer remover os valores.

3. Exibição dos valores dos conjuntos: exibe na tela os valores inseridos até o momento
nos dois conjuntos. Caso o usuário não tenha inserido nenhum valor ou tenha removido
todos os dados, é preciso exibir uma mensagem informando que o conjunto é vazio.

4. União: realiza a união dos conjuntos A e B e gera um terceiro conjunto, cujos valores
devem ser mostrados na tela.

5. Intersecção: realiza a intersecção dos conjuntos A e B e gera um terceiro conjunto, cujos
valores devem ser mostrados na tela.

6. Diferença: o usuário deve escolher a ordem de execução da operação (A - B ou B - A). O
conjunto resultante deve ser mostrado na tela.

7. Verifica se um conjunto está contido no outro: o usuário deve escolher a ordem dos
parâmetros (A contido em B ou B contido em A).
