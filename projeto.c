#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {

    setlocale(LC_ALL, "Portuguese_Brazil");

printf("Aluno: Max Junior da Silva Elyseu. \n");
printf("Disciplina: Análise e Desenvolvimento de sistemas.\n");
printf("Matrí­cula: 202210836.\n");

printf("\nSeja bem vindo(a) ao meu programa!\n");

printf("\nVocê irá testar a minha calculadora criada em Linguagem de Programação C.\n");

printf("Vamos começar!\n\n");

int num1, num2, soma, subtrai, multiplica, dividi, raiz, potencia; //Variáveis das operações
int op;


printf("Escolha a sua operação: \n 1 = SOMA\n 2 = SUBTRAÇÃO \n 3 = MULTIPLICAÇÃO \n 4 = DIVISÃO \n 5 = RAIZ QUADRADA \n 6 = POTÊNCIA.\n\n \t");
scanf("%d", &op); //Aqui o usuário irá digitar qual o número da sua operação

if(op == 1){ // Se o usuário escolhe a operação 1, acontecerá soma dos números escolhidos por ele
    printf("Escolha um número: \n"); // Aqui o usuário digitará seu primeiro número
    scanf("%d", &num1);
    printf("Escolha mais um número: \n"); // Aqui o usuário digitará seu segundo número
    scanf("%d", &num2);

    soma = num1 + num2; //Variável da soma  dos números escolhidos pelo usuário
    printf("A soma dos seus números é: %d", soma); //Resultado da soma
}

if(op == 2) { // Se o usuário escolhe a operação 2, acontecerá subtração dos números escolhidos por ele
    printf("Escolha um número: \n"); // Aqui o usuário digitará seu primeiro número
    scanf("%d", &num1);
    printf("Escolha mais um número: \n");// Aqui o usuário digitará seu segundo número
    scanf("%d", &num2);

    subtrai = num1 - num2;//Variável da subtração  dos números escolhidos pelo usuário
    printf("A subtração dos seus números é: %d", subtrai); //Resultado da subtração
}

if(op == 3) { //Variável da multiplicação  dos números escolhidos pelo usuário
    printf("Escolha um número : \n");// Aqui o usuário digitará seu primeiro número
    scanf("%d", &num1);
    printf("Escolha mais um número: \n");// Aqui o usuário digitará seu segundo número
    scanf("%d", &num2);

    multiplica = num1 * num2; //Variável da multiplicação  dos números escolhidos pelo usuário
    printf("A multiplicação dos seus números é: %d", multiplica); //Resultado da multiplicação
}


if(op == 4) { //Variável da divisão  dos números escolhidos pelo usuário
    printf("Escolha um número: \n");// Aqui o usuário digitará seu primeiro número
    scanf("%d", &num1);
    printf("Escolha mais um número: \n");// Aqui o usuário digitará seu segundo número
    scanf("%d", &num2);

    dividi = num1 / num2; //Variável da divisão  dos números escolhidos pelo usuário
    printf("A divisão dos seus números é: %d", dividi); //Resultado da divisão
}


if(op == 5) { //Variável da raiz quadrada  do número escolhido pelo usuário
    printf("Escolha um número : \n");// Aqui o usuário digitará seu número
    scanf("%d", &num1);

    raiz = sqrt(num1); //Variável da raiz quadrada  dos números escolhidos pelo usuário
    printf("A raiz quadrada do seu número é: %d", raiz); //Resultado da raiz quadrada
}


if(op == 6) { //Variável da potência  do número escolhido pelo usuário
    printf("Escolha um número: \n");// Aqui o usuário digitará seu número
    scanf("%d", &num1);

    potencia = pow(num1, 2); //Variável da potência  do número escolhido pelo usuário
    printf("A potência do seu número é: %d", potencia); //Resultado da potência
}








return 0;
}