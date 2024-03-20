#include <stdio.h>
#include <string.h>

void inverterFrase(char *string){
    int tam = strlen(string);
    int i, j;
    char temp;
    
    for(i= 0, j = tam - 1; i < j; i++, j--){
            temp=string[i];
            string[i]=string[j];
            string[j]=temp;
    }
}

int main()
{
    char frase[] = "Um homem so e nobre quando consegue sentir piedade por todas as criaturas.";
    
    printf("String original: %s\n", frase);
    
    inverterFrase(frase);
    
    printf("String invertida: %s\n", frase);
    
    return 0;
}
