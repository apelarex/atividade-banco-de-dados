typedef struct {
    char nome[100];
    int idade;
    int cpf;
    char email[100];
    int senha[30];
   
}   Cadastro;


void cadastro(Cadastro pessoa[]) {
    printf("Digite o seu nome: ");
    scanf(" %[^\n]s", pessoa[0].nome);
    printf("Digite a sua idade: ");
    scanf(" %d", &pessoa[0].idade);
    printf("Digite o seu CPF: ");
    scanf(" %d", &pessoa[0].cpf);
    printf("Digite o seu E-MAIL: ");
    scanf("%s", pessoa[0].email);
    printf("Digite a sua senha: ");
    scanf("%s", pessoa[0].senha);
}

void exibirdados(Cadastro pessoa[]) {
    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\n", pessoa[0].nome);
    printf("Idade: %d\n", pessoa[0].idade);
    printf("CPF: %d\n", pessoa[0].cpf);
    printf("E-MAIL: %s\n", pessoa[0].email);
    printf("senha: %s\n", pessoa[0].senha);
}


int main()
{
    Cadastro pessoa[20];
    int op;
   
    do {
           
    scanf("%d", &op);        
    switch(op) {
        case 1:
        cadastro(pessoa);
        exibirdados(pessoa);
       
        case 2:
        break;

    return 0;
    }
    } while(op <= 2);
}