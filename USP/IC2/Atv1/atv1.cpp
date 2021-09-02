#include <bits/stdc++.h>

using namespace std;

// declaração struct alunos
typedef struct alunos {
    string nome;
    long int num_usp;
    float p1;
    float p2;
    float media_final;
};

// funções usadas no código com escopo depois da main
void buffer_clear();
void menu(int menu_counter);
void cadastrar_alunos(alunos *aluno, int quantidade_alunos);
void consultar_aluno(alunos *aluno, int alunos_cadastrados) ;
void print_separador();

int main() {

    // inicialização das variáveis que serão utilizadas no programa
    alunos *aluno;
    char option;
    int menu_counter = 0;
    menu(menu_counter);
    cin >> option;
    buffer_clear(); // limpa o buffer do teclado para evitar erros na leitura

    int n = 0;
    
    print_separador();

    while (option != '3') { 
        switch(option) {
            case '1': // caso o usuário escolheu a primeira opção
                
                /* verifica se é a primeira vez que o usuário escolheu cadastrar
                   um aluno, pois só será permitida essa ação 1 vez.
                */
                if (menu_counter > 0) { 
                    cout << "\nO total de alunos já foram cadastrados.\n";
                    menu(menu_counter);
                    break;
                }
                menu_counter++; // se entra nesse caso, a variável será 1 para saber que foi acessado
                cout << "\nQuantos alunos deseja cadastrar? ";
                cin >> n;

                aluno = new alunos[(int)n];
                cadastrar_alunos(aluno, n);
                menu(menu_counter);
                cin >> option;
                buffer_clear();
                break;

            case '2': // caso o usuário escolha a 2 opção
                consultar_aluno(aluno, n);
                menu(menu_counter);
                cin >> option;
                buffer_clear();
                break;

            default: // caso o usuário não escolha nenhuma opção válida
                cout << "\nPor favor, digite uma opção válida!\n";
                menu(menu_counter);
                cin >> option;
                buffer_clear();
                break;
        }    
    }
    
    print_separador();
    cout <<  "Programa encerrado!" << endl;
    
    if (n > 0) {
        free(aluno); // libera o ponteiro para a struct
    }

    return 0;
}

// função que limpa o buffer do teclado
void buffer_clear() { 
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

// função que exibe o menu para o usuário
void menu(int menu_counter) {

    print_separador();

    if (menu_counter >= 1) {
        cout << "Deseja realizar mais algum operação?" << endl;
        cout << "   2 - Mostrar dados de um aluno" << endl;
        cout << "   3 - Sair" << endl;
    }
    else {
        cout << "Selecione a opção que deseja:" << endl;
        cout << "   1 - Entrar com dados do aluno" << endl; 
        cout << "   2 - Mostrar dados de um aluno" << endl;
        cout << "   3 - Sair" << endl;
    }
    cout << "(Apenas o primeiro caracter será considerado!)\n";
    cout << "   ";
}

// função responsável por cadastrar o aluno, recebendo o ponteiro 
// para struct e a quantidade de alunos  a serem cadastrados
void cadastrar_alunos(alunos *aluno, int quantidade_alunos) {

    if (quantidade_alunos == 0) {
        cout << "Nenhum aluno cadastrado." << endl;
        return;
    }
    // realiza o loop para cadastrar cada aluno
    for (int i = 0; i < quantidade_alunos; i++) {

        print_separador();

        cout << "Cadastrando aluno " << i + 1 << ":\n\n";

        cout << "Nome:";
        cin >> aluno[i].nome;

        cout << "Número USP:";
        cin >> aluno[i].num_usp;
        buffer_clear();

        cout << "Nota da primeira prova:";
        cin >> aluno[i].p1;

        cout << "Nota da segunda prova:";
        cin >> aluno[i].p2; 

        aluno[i].media_final = (aluno[i].p1 + aluno[i].p2) / 2;
    }            
    cout << "\n\nAluno(s) cadastrado(s) com sucesso!" << endl;
    print_separador();
}

// função responsável por fazer a consulta dos alunos cadastrados pelo número usp
void consultar_aluno(alunos* aluno, int alunos_cadastrados) {

    if (alunos_cadastrados == 0) {
        cout << "Nenhum aluno cadastrado." << endl;
    }
    else {
        long int num_usp_consulta;
        cout << "\nDigite o número USP do aluno que deseja consultar: ";
        cin >> num_usp_consulta;

        for(int i = 0; i <  alunos_cadastrados; i++) {
            if(num_usp_consulta == aluno[i].num_usp) {
                print_separador();
                cout << "Mostrando dados do aluno " << i + 1 << ":\n\n";
                cout << "Nome: " << aluno[i].nome << endl;
                cout << "Número USP: " << aluno[i].num_usp << endl;
                cout << "Nota da prova 1: " << aluno[i].p1 << endl;
                cout << "Nota da prova 2: " << aluno[i].p2 << endl;
                cout << "Média final: " << aluno[i].media_final << endl;
                break;
            }
            else {
                cout << "Aluno não cadastrado." << endl;
            } 
        } 
    }
}

// função que printa um separador para o menu ficar com um visual melhor
void print_separador() {
    cout << "\n------------------------------------------------\n";
}




