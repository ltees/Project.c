#include <stdio.h>
#include <string.h>


// Definição da estrutura para o cadastro
struct Cadastro {
    char nome[50];
    int idade;
    char matricula[20];
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[100];
};


int main() {
    struct Cadastro cadastro;


    printf("Nome: ");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);
    cadastro.nome[strcspn(cadastro.nome, "\n")] = '\0'; // Remover a quebra de linha


    printf("Idade: ");
    scanf("%d", &cadastro.idade);
    getchar(); // Limpar o buffer do teclado


    printf("Matricula: ");
    fgets(cadastro.matricula, sizeof(cadastro.matricula), stdin);
    cadastro.matricula[strcspn(cadastro.matricula, "\n")] = '\0';


    printf("Endereço: ");
    fgets(cadastro.endereco, sizeof(cadastro.endereco), stdin);
    cadastro.endereco[strcspn(cadastro.endereco, "\n")] = '\0';


    printf("Curso: ");
    fgets(cadastro.curso, sizeof(cadastro.curso), stdin);
    cadastro.curso[strcspn(cadastro.curso, "\n")] = '\0';


    printf("Período: ");
    fgets(cadastro.periodo, sizeof(cadastro.periodo), stdin);
    cadastro.periodo[strcspn(cadastro.periodo, "\n")] = '\0';


    printf("Disciplinas (separadas por vírgula): ");
    fgets(cadastro.disciplinas, sizeof(cadastro.disciplinas), stdin);
    cadastro.disciplinas[strcspn(cadastro.disciplinas, "\n")] = '\0';


    // Apresentação das informações
    printf("\nInformações do Cadastro:\n");
    printf("Nome: %s\n", cadastro.nome);
    printf("Idade: %d\n", cadastro.idade);
    printf("Matrícula: %s\n", cadastro.matricula);
    printf("Endereço: %s\n", cadastro.endereco);
    printf("Curso: %s\n", cadastro.curso);
    printf("Período: %s\n", cadastro.periodo);
    printf("Disciplinas: %s\n", cadastro.disciplinas);


    return 0;
}
