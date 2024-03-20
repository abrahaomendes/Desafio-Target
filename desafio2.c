#include <stdio.h>

int sequencia_fibonacci(int numero, int sequencia[]){
    sequencia[0]=0;
    sequencia[1]=1;
    int i=2;
    while(sequencia[i - 1] < numero){
        sequencia[i] = sequencia[i -1]+sequencia[i-2];
        i++;
    }
    return i;
}
int checkagem_fibonacci(int numero, int sequencia[], int tam ){
     for (int i = 0; i < tam; i++) {
        if (sequencia[i] == numero) {
            return 1;  // Retorna 1 se o número estiver na sequência
        }
    }
    return 0;
}

int main(){

    int numero;
    
    do{
    printf("Digite um numero para verificar se pertencia a sequencia fibonacci\n");
    printf("Caso queira sair digite -1\n");
    scanf("%d", &numero);
   

    int sequencia[100];
    int tam = sequencia_fibonacci(numero, sequencia);

    if(checkagem_fibonacci(numero, sequencia,tam) == 1)
        printf("O %d numero pertence a sequencia fibonacci\n", numero);
        else
            printf("O %d numero não pertence a sequencia fibonacci\n", numero);
    
    }while(numero!=-1);


    return 0;
}