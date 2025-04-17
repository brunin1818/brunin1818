#include <stdio.h>

int main()
{
    int idade;
    
    printf("Insira a sua idade: \n");
    scanf("%d", &idade);
    
    if(idade < 12) {
    printf("Você é uma criança");
    
    } else if(idade = 12 && idade < 17) {
        printf("Você é um adolescente");
        
    } else {
        printf("Você é um adulto");
    }
    
    
    

    return 0;
}