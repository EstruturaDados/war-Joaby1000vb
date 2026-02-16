#include <stdio.h>
#include <string.h>
// maximo de territorios que o mundo pode ter
#define MAX_TERRITORIO 5
// estrutura para representar um territorio do mundo
struct territorio {
    char nome[30];
    char cor[10];
    int qtdtropas;
};

int main() // funcao principal do programa
{
    struct territorio mundo[MAX_TERRITORIO]; // array para armazenar os territorios do mundo
	int qtdterritorios = 0; // contador para controlar quantos territorios foram cadastrados

    printf("==================================\n");
    printf("      vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");

    for (int i = 0; i < MAX_TERRITORIO; i++) { // loop para cadastrar os territorios
        printf("\n--- Cadastrando Territorio %d ---\n", qtdterritorios + 1);
        printf("Nome do territorio: ");
        scanf("%s", mundo[qtdterritorios].nome);
        printf("Cor do Exercito: ");
        scanf("%s", mundo[qtdterritorios].cor);
        printf("Quantidade de tropas: ");
        scanf("%d", &mundo[qtdterritorios].qtdtropas);
        qtdterritorios++;
    }

    printf("\n Cadastro concluido!\n"); 

    printf("\n===================================\n");
    printf("    MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("===================================\n\n");

    for (int i = 0; i < MAX_TERRITORIO; i++){ // loop para exibir os territorios cadastrados
        printf("TERRITORIO %d:\n", i + 1);
        printf(" - Nome: %s\n", mundo[i].nome);
        printf(" - Dominado por: Exercito %s\n", mundo[i].cor);
        printf(" - Tropas: %d\n\n", mundo[i].qtdtropas);
	}
}