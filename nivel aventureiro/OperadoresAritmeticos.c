#include <stdio.h>
#include <math.h>



int main() {
  
  /*
  soma(+)
  subtração(-)
  multiplicação(*)
  divisão (/)
  */

    
  //definir variaveis para armazenar os valores a serem calculados
    
  int numero1, numero2;
    
  // variaveis para os resultados das operações
    
  int soma, subtração, multiplicação;
    
  float divisão;
    
  //solicitar e armazenar os valores a serem calculados
    
  printf(" digite um numero inteiro: ");
    
  scanf("%d", &numero1);

    
  printf(" digite outro numero inteiro: ");
    
  scanf("%d", &numero2);

    
  //operação de soma
    
  soma = numero1 + numero2;
    
  //operação de subtração 
    
  subtração = numero1 - numero2;
    
  //operação de multiplicaçã
    
  multiplicação = numero1 * numero2;
    
  //operação de divisão
    
  divisão = numero1 / numero2;

    
  //saida dos valores para o usuario
    
  printf("a soma dos dois numero é: %d\n", soma);
  printf("a diferença entre o primeiro e o segundo numero é: %d\n", divisão);  
  printf("o produto dos numeros é: %d\n", multiplicação);
  printf("a divisao so primeiro pelo segundo é: %f\n", divisão);

  return 0;

}