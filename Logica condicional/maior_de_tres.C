
#include <stdio.h>

int main()
{
   int n1, n2, n3;
   
   printf("Insira o primeiro número: \n");
   scanf("%d", &n1);
   
   printf("Insira o segundo número: \n");
   scanf("%d", &n2);
   
   printf("Insira o terceiro número: \n");
   scanf("%d", &n3);
   
   if(n1 > n2 && n1 > n3) {
       printf("O primeiro é o maior");
  
   }else if(n2 > n1 && n2 > n3)  {
       printf("O segundo é o maior");
  
   }else if(n3 > n1 && n3 > n2) {
       printf("O terceiro é o maior");
   
       
   }else {
       printf("São iguais");
   }
   
    return 0;
}