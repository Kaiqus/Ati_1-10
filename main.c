//Exercicio 1
//Escreva um programa que imprime "Ola, Mundo!" na tela.

//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//   printf("Ola, Mundo!");

//   return 0;
//}

//Exercicio 2
//Peça ao usuário para inserir dois números inteiros e exiba a soma deles.

//#include <stdio.h>
//#include <stdlib.h>


//int main(){

//int num1 , num2 , result;

//printf("Digite o primeiro numero inteiro:");
//scanf("%i", &num1);
//printf("Digite o segundo numero inteiro:");
//scanf("%i", &num2);
//result = num1 + num2;
//printf("Os dois numeros somados ficou: %i", result);

//return 0;
//}

//Exercicio 3
//Peça ao usuário para inserir um número e determine se ele é par ou ímpar.

//#include <stdio.h>
//#include <stdlib.h>

//int main(){

//int num ;

//printf("Digite um numero:");
//scanf("%i",&num);

//if (num % 2 == 0) {
//     printf("O numero %i e par.\n", num);
//} else {
//     printf("O numero %i e impar.\n", num);
//}

//return 0;
//}

//Exercicio 4
//Solicite ao usuário três números e calcule a média deles.

//#include <stdio.h>
//#include <stdlib.h>

//int main(){

//int num1 , num2 , num3 , result, media ;

//printf("Digite o primeiro numero inteiro:");
//scanf("%i", &num1);
//printf("Digite o segundo numero inteiro:");
//scanf("%i", &num2);
//printf("Digite o terceiro numero inteiro:");
//scanf("%i", &num3);

//result = num1 + num2 + num3;

//media = result/3;

//printf("A media dos numeros ficou: %i",media);

//return 0;
//}

//Exercicio 5
//Peça um número e exiba a tabuada dele de 1 a 10.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {

//int num;

//printf("Digite um numero inteiro: ");
//scanf("%i", &num);
    
//printf("Tabuada do %i:\n", num);

//for (int i = 0; i <= 10; i++) {
//printf("%i x %i = %i\n", num, i, num * i);
//}

//return 0;
//}

//Exercicio 6
//Peça três números e determine qual é o maior entre eles.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {

//int num1 , num2 , num3;

//printf("Digite o primeiro numero inteiro:");
//scanf("%i", &num1);
//printf("Digite o segundo numero inteiro:");
//scanf("%i", &num2);
//printf("Digite o terceiro numero inteiro:");
//scanf("%i", &num3);

//if (num1 > num2 && num1 > num3) {
//printf("O maior numero: %i", num1);
//}
//else if (num2 > num1 && num2 > num3) {
//printf("O maior numero: %i", num2);
//}
//else {
//printf("O maior numero: %i", num3);
//}
    
//return 0;

//}

//Exercicio 7
//Peça um número ao usuário e imprima uma contagem de 1 até esse número e depois de volta para 1.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {

//int num;

//printf("Digite um numero: ");
//scanf("%i", &num);
   
//printf("Contagem de 1 ate %i:\n", num);
//for (int i = 1; i <= num; i++) {
//printf("%i ", i);
//}

//for (int i = num - 1; i >= 1; i--) {
//printf("%i ", i);
//}

//return 0;
//}

//Exercicio 8
//Peça um número inteiro positivo e calcule seu fatorial.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {
//int num, fatorial = 1;

//printf("Digite um numero inteiro e positivo: ");
//scanf("%i", &num);

//if (num < 0) {
//printf("Nao existe fatorial de numero negativo.\n");
//} else {
//printf("%i! = ", num);

//for (int i = num; i > 0; i--) {
//printf("%i", i);
//if (i > 1) {
//printf(" x ");
//}
//fatorial *= i;
//}

//printf(" = %i\n", fatorial);
//}

//return 0;
//}

//Exercicio 9
//Peça um número N e exiba os primeiros N termos da sequência de Fibonacci.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {
//   int N, a = 0, b = 1, c;

//    printf("Digite o numero N para ver os primeiros N termos da sequência de Fibonacci: ");
//    scanf("%i", &N);

//    if (N <= 0) {
//        printf("Numero invalido!\n");
//    } else {
//        printf("Sequencia de Fibonacci: ");
        
//        // Primeiro termo
//        if (N >= 1) {
//            printf("%i ", a);
//        }
        
//        // Segundo termo
//        if (N >= 2) {
//            printf("%i ", b);
//        }
        
//        // Próximos termos
//        for (int i = 3; i <= N; i++) {
//            c = a + b;  // a + b vai gerar o próximo número
//            printf("%i ", c);
//            a = b;  // atualiza a para o próximo valor
//            b = c;  // atualiza b para o próximo valor
//        }

//        printf("\n");
//    }

//   return 0;
//}

//Exercicio 10
//Peça um número ao usuário e determine se ele é primo ou não.

//#include <stdio.h>
//#include <stdlib.h>

//int main() {

//    int num, i, Primo = 1;  // Primo é 1 se for primo, 0 caso contrário

//    printf("Digite um numero inteiro: ");
//   scanf("%i", &num);

//    // Verificar se o número é menor que 2, pois números menores que 2 não são primos
//    if (num <= 1) {
//        printf("%i - Nao e primo.\n", num);
//        return 0;
//    }

//    // Verificar se o número é divisível por algum número de 2 até a raiz quadrada de num
//    for (i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            Primo = 0;  // O número não é primo
//        }
//    }

//    // Resultado
//    if (Primo) {
//        printf("%i - Primo.\n", num);
//    } else {
//        printf("%i - Nao e primo.\n", num);
//    }

//    return 0;
//}
