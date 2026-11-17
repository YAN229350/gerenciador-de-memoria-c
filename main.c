#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

//função de voltar ez
void voltar(int *b){
printf("\nOpção 1 voltar");
printf("\nOpção: ");
scanf("%d", b);

}


int main(){
    setlocale(LC_ALL, "Portuguese");

//inicialização de ponteiro
int *p = NULL;

  // inicialização de variaveis
int i = 0;
int escolha[2];

//colocando variavel com valor 0
int quantidade = 0;
escolha[1] = 0;


do {
        //reiniciação das variável com valor 0
    i = 0;
    escolha[1] = 0;
        escolha[0] = 0;

        system("cls");
printf("Opção 1(Novos numeros)");
printf("\nOpção 2(Ver numeros armazenados)");
printf("\nOpção 3(Resetar Números)");
printf("\nOpção 4(Sair)");

printf("\n\nEscolha: ");
scanf("%d", &escolha[0]);
switch(escolha[0]){



case 1:{
printf("Quantidade que deseja: ");
scanf("%d", &quantidade);

if (quantidade <= 0) {
    printf("Quantidade invalida!");
    return 1;
}

free(p);
p = NULL;

p = calloc(quantidade, sizeof(int));




if (p == NULL) {
    printf("Erro ao alocar memoria!");
    return 1;
}

system("cls");
while (i < quantidade) {
    printf("Digite o numero %d: ", i + 1);
    scanf("%d", &p[i]);

    i++;

}// while


voltar(&escolha[1]);

}// case 1
break;


case 2:

    i = 0;

    if(quantidade <= 0){
        printf("Sem Números Válidos");
        voltar(&escolha[1]);

        //else
    }else{
system("cls");

//monstra o numeros armazenados

while (i < quantidade){
    printf("%d: numero armazenado: %d \n", i + 1,  p[i]);
i++;

}// while de quantidade
voltar(&escolha[1]);
}//else

break;


//defaull
default:
    printf("Erro opção inválida");

voltar(&escolha[1]);
break;


//case 3
case 3:{
free(p);
p = NULL;
quantidade = 0;

printf("\nNúmeros resetados com sucessos");

voltar(&escolha[1]);
}// case 3
break;

case 4:{

free(p);
    p = NULL;

return 0;
}
break;


}//switch


}while(escolha[1] == 1);


free(p);
p = NULL;

return 0;
}
