#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

printf("Aluno: Max Junior da Silva Elyseu. \n");
printf("Disciplina: An�lise e Desenvolvimento de sistemas.\n");
printf("Matr�cula: 202210836.\n");

printf("\nSeja bem vindo(a) ao meu programa!\n");

printf("\nVoc� ir� testar a minha calculadora criada em Linguagem de Programa��o C.\n");

printf("Vamos come�ar!\n\n");

int num1, num2, soma, subtrai, multiplica, dividi, raiz, potencia; //Vari�veis das opera��es
int op;


printf("Escolha a sua opera��o: \n 1 = SOMA\n 2 = SUBTRA��O \n 3 = MULTIPLICA��O \n 4 = DIVIS�O \n 5 = RAIZ QUADRADA \n 6 = POT�NCIA.\n\n \t");
scanf("%d", &op); //Aqui o usu�rio ir� digitar qual o n�mero da sua opera��o

if(op == 1){ // Se o usu�rio escolhe a opera��o 1, acontecer� soma dos n�meros escolhidos por ele
    printf("Escolha um n�mero: \n"); // Aqui o usu�rio digitar� seu primeiro n�mero
    scanf("%d", &num1);
    printf("Escolha mais um n�mero: \n"); // Aqui o usu�rio digitar� seu segundo n�mero
    scanf("%d", &num2);

    soma = num1 + num2; //Vari�vel da soma  dos n�meros escolhidos pelo usu�rio
    printf("A soma dos seus n�meros �: %d", soma); //Resultado da soma
}

if(op == 2) { // Se o usu�rio escolhe a opera��o 2, acontecer� subtra��o dos n�meros escolhidos por ele
    printf("Escolha um n�mero: \n"); // Aqui o usu�rio digitar� seu primeiro n�mero
    scanf("%d", &num1);
    printf("Escolha mais um n�mero: \n");// Aqui o usu�rio digitar� seu segundo n�mero
    scanf("%d", &num2);

    subtrai = num1 - num2;//Vari�vel da subtra��o  dos n�meros escolhidos pelo usu�rio
    printf("A subtra��o dos seus n�meros �: %d", subtrai); //Resultado da subtra��o
}

if(op == 3) { //Vari�vel da multiplica��o  dos n�meros escolhidos pelo usu�rio
    printf("Escolha um n�mero : \n");// Aqui o usu�rio digitar� seu primeiro n�mero
    scanf("%d", &num1);
    printf("Escolha mais um n�mero: \n");// Aqui o usu�rio digitar� seu segundo n�mero
    scanf("%d", &num2);

    multiplica = num1 * num2; //Vari�vel da multiplica��o  dos n�meros escolhidos pelo usu�rio
    printf("A multiplica��o dos seus n�meros �: %d", multiplica); //Resultado da multiplica��o
}


if(op == 4) { //Vari�vel da divis�o  dos n�meros escolhidos pelo usu�rio
    printf("Escolha um n�mero: \n");// Aqui o usu�rio digitar� seu primeiro n�mero
    scanf("%d", &num1);
    printf("Escolha mais um n�mero: \n");// Aqui o usu�rio digitar� seu segundo n�mero
    scanf("%d", &num2);

    dividi = num1 / num2; //Vari�vel da divis�o  dos n�meros escolhidos pelo usu�rio
    printf("A divis�o dos seus n�meros �: %d", dividi); //Resultado da divis�o
}


if(op == 5) { //Vari�vel da raiz quadrada  do n�mero escolhido pelo usu�rio
    printf("Escolha um n�mero : \n");// Aqui o usu�rio digitar� seu n�mero
    scanf("%d", &num1);

    raiz = sqrt(num1); //Vari�vel da raiz quadrada  dos n�meros escolhidos pelo usu�rio
    printf("A raiz quadrada do seu n�mero �: %d", raiz); //Resultado da raiz quadrada
}


if(op == 6) { //Vari�vel da pot�ncia  do n�mero escolhido pelo usu�rio
    printf("Escolha um n�mero: \n");// Aqui o usu�rio digitar� seu n�mero
    scanf("%d", &num1);

    potencia = pow(num1, 2); //Vari�vel da pot�ncia  do n�mero escolhido pelo usu�rio
    printf("A pot�ncia do seu n�mero �: %d", potencia); //Resultado da pot�ncia
}








return 0;
}