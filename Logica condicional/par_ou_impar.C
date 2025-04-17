#include <stdio.h>

int main()
{
   int n;
   printf("Insira um número: ");
   scanf("%d", &n);
   
   if(n % 2 == 0) {
       printf("É um número par");
   } else {
       printf("É um número ímpar");
   }

    return 0;
}