#include <stdio.h>   // biblioteca de comunicação com usuário
#include <stdlib.h>  // biblioteca de alocação de espaço em memória
#include <locale.h>  // biblioteca para definição de localização
#include <string.h>  // biblioteca responsável por cuidar das string


int registro() // função responsavael por cadastrar os usuarios no sistema
{
   // inicio da ciração de variaveis/string
    char arquivo [40];
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
  // fim da ciração de variaveis/string
    
    printf("Digite o CPF a ser cadastrado"); // coletando a info do usuario
    scanf("%s", cpf); // Responsavel por copiar os valores das string
    
    strcpy(arquivo, cpf); //responsavel por copiar o valor da string
    
    FILE *file; // cria arquivo
    file = fopen(arquivo, "w");// cria o arquivo e o "w" significa escrever
    fprintf(file,cpf);// salva o valor da variavel
    fclose(file);//fecha o arquivo
    
    file = fopen(arquivo, "a"); // abre o arquivo
    fprintf(file, ","); // adiciona a virgula apos a palavra
    fclose(file); // fecha o aquivo
    
    printf("Digite o nome a ser cadastrado: "); // coleta a info do usuario
    scanf("%s", nome); // copia os valores da strting
    
    file = fopen(arquivo, "a"); // abr o arquivo
    fprintf(file, nome); // adiciona a info
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); // abre o arquivo
    fprintf(file,","); // adiciona a virgula apos a palavra
    fclose(file); // fecha o arquivo
    
    printf("Digite o sobrenome a ser cadastrado: "); // coleta a info do usuario
    scanf("%s",sobrenome); // copia o valor da string
    
    file = fopen(arquivo, "a"); // abre o arquivo
    fprintf(file,sobrenome); // adiciona a info
    fclose(file); // fecha o aquivo
    
    file = fopen(arquivo, "a"); // abre o arquivo
    fprintf(file,","); // adiciona a virgula
    fclose(file); // fecha arquivo
    
    printf("Digite o cargo a ser cadastrado: "); // coleta a info doo usauario
    scanf("%s",cargo); // copia o valor da string
    
    file = fopen(arquivo, "a"); // abre o arquivo
    fprintf(file,cargo); // aiona a info
    fclose(file); // fecha o arquivo
    
    system("pause");
}


int consulta()
{
    setlocale(LC_ALL, "Portuguese"); // defilindo a linguagem
    
    // inicio da ciração de variaveis/string
    char cpf [40];
    char conteudo [200];
    // fim da ciração de variaveis/string
    
    printf("Digite o cpf a ser consultado"); // coleta da info do usuario
    scanf("%s", cpf); // copia o valor da strting
    
    FILE *file; // cria arquivo
    file = fopen(cpf, "r"); // abre arquivo
    
    if (file == NULL)
    {
        printf("Não foi possivel abrir o arquivo, não localizado.\n");
    }
    while (fgets(conteudo,200, file) != NULL)
    {
        printf("\n Essas são as informaçoês do usuario");
        printf("%s", conteudo);
        printf("\n\n");
    }
    
    system("pause");
}
    
    int deletar()
    {
        // inicio da ciração de variaveis/string
        char cpf [40];
        // fim da ciração de variaveis/string
        printf("Digite o cpf do usuario a ser deletado:"); // colte a info do usuario
        scanf("%s", cpf);// copia o valor da strtinh
        
        remove(cpf); // deleta o cpf
      
        FILE *file; //cria o rquivo
        file = fopen(cpf, "r"); // abre arquivo
        
        if (file == NULL)
        {
            printf("O usuario não se encontra no sistema!\n");
            system("pause");
        }
    }
    
    int main() // Definindo Variáveis
    {
        int opcao=0;
        int laco=1;
        char senhadigitada[10]="a";
        int comparacao;
        
        printf("##Cartório da EBAC ###\n\n");
        printf("Login de administrador!\n\nDigite a sua senha:");
        scanf("%s", senhadigitada);
        
        comparacao = strcmp(senhadigitada, "admin");
        if (comparacao == 0)
        
        if(senhadigitada[10] == "admin")
        {
            system("cls");
            for(laco=1; laco=1;)
            {
                
                system("cls"); // responsavel por limpar a pele
                
                setlocale(LC_ALL, "Portuguese"); // defilindo a linguagem
                
                
                printf("### Cartório da EBAC ###\n\n"); // inicio do menu
                printf("escolha a opção desejada do menu: \n\n");
                printf("\t1 - Registrar nomes \n\n");
                printf("\t2 - Consultar nomes \n\n");
                printf("\t3 - Deletar nomes \n\n");
                printf("\t4 - Sair do sistema \n\n");
                printf("Opção: "); // fim do menu
                
                scanf("%d", &opcao); // armazenando a escolha do usuário
                
                system("cls");
                
                switch (opcao) // inicio da selçáo do menu
                {
                    case 1:
                        registro(); // chamada da função
                        break;
                        
                    case 2:
                        consulta();// chamada da função
                        break;
                        
                    case 3:
                        deletar(); // chamada da função
                        break;
                        
                    case 4:
                        printf("Obrigado por utilizar o sistema");
                        return 0;
                        break;
                        
                    default:
                        printf("Essa opção não está disponivel!\n");
                        system("pause");
                        break;
                } // fim da seleção
            }
        }
    }

