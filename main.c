#include <stdio.h>

//Exercicios 1 e 2 
/* int x = (2 + 3) *4
2 + 3=5
5 * 4 = 20
x = 20
logica: primeiro resolve o parenteses e depois faz a multiplicacao
*/

//Exercicio 3 
/* int x = 10 / 3
10 / 3
x = 3.0000000
logica: fazer a divisao e usar o float para uso decimal e o valor ficar inteiro
*/

//Exercicios 4 e 5 
/* int x = 10 / 3.0
10 / 3.0
x = 3.333333
logica: sem o float e com o valor com ".0" faz o calculo ter a continuaçao dos valores decimais
*/

//Exercicio 6 
/* int x = 5 + 7/2
7 / 2 = 3
5 + 3 = 8
x = 8
logica: fazer a divisao primeiro e depois somar 
*/

// Exercicio 7
/* int x = 10 > 5
10 > 5 = 1 (verdadeiro)
x = 1
logica: comparaçao de valores 
*/

//Exercício 8
/*int x = 10 == 5
10 == 5 = 0 (falso)
x = 0
logica: comparaçao de valores 
*/


//Exercício 9
/* int x = (2 + 3) > (4 * 2)
2 + 3 = 5
4 * 2 = 8
5 > 8 = 0 (falso)
x = 0
logica: comparaçao de valores 
*/


//Exercício 10 (Expressão mista)
/* int x = (10 / 2) + (3 > 1) 
10 / 2 = 5
3 > 1 = 1 (verdadeiro)
5 + 1 = 6
x = 6 
logica: comparaçao de valores e soma 
*/


//Exercício 11 (Muito importante)
/* int x = (5 > 3) * 10
5 > 3 = 1 (verdadeiro)
1 * 10 = 10
x = 10 
logica: comparaçao de valores e multiplicaçao
*/


//Exercício 12 (Nível mais alto)
/* int x = (8 + 2) / (3 + 2)
8 + 2 = 10
3 + 2 = 5
10 / 5 = 2
x = 2
logica: primeiro resolve o parenteses e depois faz a divisao
*/


//Exercício 14
/* int x = (8 + 2) / 3 + 2
8 + 2 = 10
10 / 3 = 3
3 + 2 = 5
x = 5
logica: primeiro resolve o parenteses e depois faz a divisao e a soma
*/


//Exercício 15
/* int x = 5 / 2 * 2
5 / 2 = 2 
2 * 2 = 4
x = 4
logica: resolver da esquerda para direita conforme a ordem dos fatores
*/


//Exercício 16
/* int x = (10 > 5) + (3 * 2)
10 > 5 = 1 (verdadeiro)
3 * 2 = 6
1 + 6 = 7
x = 7
logica: comparaçao de valores e primeiro resolve o parenteses de multiplicaçao e depois a soma
*/


//Exercício 17
/* int a, b;
scanf("%d %d", &a, &b)
int x = a + b * 2
b *  2 = 2b
a + 2b = x
se a = 3 e b = 4 o resultado seria 11
*/

//Exercício 18
/* int idade;
scanf("%d", &idade);
int maior = idade >= 18;
se idade = 20 -> resultado 1
se idade = 15 -> resultado = 0
*/