#include <stdio.h>

int main()
{
   int senha = 0;
   
   while(senha != 1234) {
       printf("Digite a senha: ");
       scanf("%d", &senha);
       
       if(senha != 1234) {
           printf("Senha incorreta. Tente novamente.\n");
           
       }
   }
    printf("Acesso Liberado.\n");
    
    return 0;
}