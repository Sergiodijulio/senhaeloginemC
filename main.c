#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct{
    char login[30];
    char senha[30];
}pessoa; pessoa p[1];

int main(){

    char login[30];
    char senha[30];

    strcpy(p[0].login, "Sergio");
    strcpy(p[0].senha, "12345");


    printf("\n\t\tlogin:");
    scanf("%s", login);
    printf("\n\t\tsenha:");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) || (strcmp(senha,p[0].senha)==0)){
        printf("Usuario logado");
        }else{
        printf("Login e/ou senha incorretos");
        }




    return 0;
}
