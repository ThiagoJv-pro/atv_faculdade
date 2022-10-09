#include <stdio.h>
#define Max 6
#include <stdbool.h>

int main(){

    bool logic = true;
    char  p1 [Max] ;
    char  p2 [Max] ;
    char  aux;

    printf("Digite o primeiro Texto: ");
    scanf("%s", p1);
    printf("Digite o segundo Texto: ");
    scanf("%s", p2);

    for(int i = 0; i < Max - 1; i++){
        for(int u = 0; u < Max -1; u++){
            if(p1[i] != p2[u]){
               logic = false;
            }else{
                logic = true;
            }
        }
    }
    if(logic){
        printf("Possui letras em comum");
    }else{
        printf("Nao possui letras em comum");
    }
}
