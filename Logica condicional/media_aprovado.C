#include <stdio.h>

int main()
{
   int n1, n2, n3, media;
   
   printf("Insira o primeiro número: \n");
   scanf("%d", &n1);
   
   printf("Insira o segundo número: \n");
   scanf("%d", &n2);
   
   printf("Insira o terceiro número: \n");
   scanf("%d", &n3);
   
   media = (n1 + n2 + n3) / 3;
   
   if(media >= 6) {
       printf("Aprovado");
  
   }else if(media >= 4 && media < 6)  {
       printf("Recuperação");
  
   }else {
       printf("Reprovado");
   }
   
    return 0;
}