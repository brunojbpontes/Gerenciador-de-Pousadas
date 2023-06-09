#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
int main()
{
    char user[10];
    char resposta[4];
    char resposta2 [4];
    char info[2][30];
    char busca[10];
    int dias=0, preco=0;
    int diaria=0, quartos=0;
    setlocale(LC_ALL,"");
    printf("Login:\nDigite a senha:\n");
    scanf("%s", &user);
    if(strcmp(user, "ADMIN")==0){
        printf("ACESSO AUTORIZADO\n");
        printf("Deseja cadastrar uma pousada?\n");
        scanf("%s", &resposta);
        if(strcmp(resposta, "SIM")==0){
            printf("Nome:\n");
            scanf("%s", &info[0]);
            printf("Diária: \n");
            scanf("%d", &diaria);
            printf("Cidade: \n");
            scanf("%s", &info[1]);
            printf("Quantos quartos disponíveis: \n");
            scanf("%d", &quartos);
            printf("POUSADA CADASTRADA\n");}
        else{
            printf("ok\n");}
    printf("Deseja procurar uma pousada por Cidade ou Valor?\n");
    scanf("%s", &busca);
        if(strcmp(busca, "Cidade")==0){
            printf("  %s\n   %s\n", info[0], info[1]);
            printf("Deseja alugar por quantos dias?\n");
            scanf("%d", &dias);
            printf("Preço: %d\n", diaria*dias);
        }
        else if(strcmp(busca, "Valor")==0){
            printf("  %s\n  %d por dia\n", info[0], diaria);
            printf("Deseja alugar por quantos dias?\n");
            scanf("%d", &dias);
            printf("Preço: %d\n", diaria*dias);}
        else{
            printf("ok\n");
        }
        printf("Deseja alugar?\n");
        scanf("%s", &resposta2);
    if(strcmp(resposta2, "SIM")==0){
        quartos--;
        printf("%d quartos disponíveis\n", quartos);
    } else if (strcmp (resposta2, "NAO")==0){
    printf("Tenha um bom dia\n");}
    else{
        printf("???\n");
    }
            }
    else
    printf("ACESSO NEGADO");

    return 0;
}
