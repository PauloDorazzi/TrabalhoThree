#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definindo a struct para armazenar o raio
//struct Circulo {
//    double raio;
//};

// Função para calcular a área do círculo
//double calculaArea(const Circulo& circulo) {
//    const double pi = 3.14159265359;  // Valor aproximado de pi

    // Fórmula para cálculo da área: π * r²
   /* double area = pi * circulo.raio * circulo.raio;
    return area;
}*/

//int main() {
    // Criando uma instância da struct Circulo
   /* Circulo meuCirculo;*/

    // Solicitando ao usuário que insira o raio
  /* cout << "Digite o raio do circulo: ";
 cin >> meuCirculo.raio;*/

    // Calculando a área usando a função calculaArea
   /* double area = calculaArea(meuCirculo);*/

    // Exibindo a área calculada
//// /*  cout << "A area do circulo com raio " << meuCirculo.raio << " é: " << area << std::endl;

//    return 0;
//}*/




//exercicio 2

//struct Temp {  
//    double grau;
//   char nome;
//}; 
//
//
//double celsiusParaFahrenheit (double grau) {
//    double fahre = (grau * 9.0 / 5.0) + 32;
//    cout << "A temperatura em Fahrenheit: " << endl;
//    return fahre;
//}
//
//double fahrenheitParaCelsius (double grau) {
//    double celsius = (grau - 32) * 5.0 / 9.0;
//    cout << "A temperatura em Celsius: " << endl;
//    return celsius;
//}
//
//int main() {
//    Temp temp;
//     
//    cout << "Digite C para celsius e F para Fahrenheit: " << endl;
//    cin >> temp.nome;
//    cout << "Digite a temperatura: " << endl;
//    cin >> temp.grau;
//
//    if (temp.nome == 'C' || temp.nome == 'c') { 
//        cout << celsiusParaFahrenheit(temp.grau);
//
//    }
//    else if (temp.nome == 'F' || temp.nome == 'f') {
//        cout << fahrenheitParaCelsius(temp.grau);
//            
//    }
//    else {
//        cout << "Escala invalida!";
//    }
//    return 0;
//}




//exercicio 3
string busca;

struct Estudante {
    string nome;
    int idade;
    int matricula;
} ;
Estudante estudante;

vector <Estudante> aluno;
void adicionarEstudante() {
    cout << "Digite o nome do estudante: " << endl;
    cin.ignore();
    getline(cin, estudante.nome);
    cout << "Digite a idade: " << endl;
    cin >> estudante.idade;
    cout << "Informe o codigo de matricula: " << endl;
    cin >> estudante.matricula;

    aluno.push_back(estudante);
    cout << "Estudante acionado com sucesso\n ";
    
}

void buscarEstudante() {

    cout << "Digite o nome do estudante: ";
    cin.ignore();
    getline(cin, busca);

    for (const Estudante& alunos : aluno) {
        if (estudante.nome == busca) {
            cout << "Nome: " << alunos.nome << "\n";
            cout << "Idade: " << alunos.idade << "\n";
            cout << "Matricula: " << alunos.matricula << "\n";

        }
    }
    if (aluno.empty()) {
        cout << "Nenhum estudante cadastrado!\n";
    }
}

    int main() {
        int opcao;

        do {
        cout << "----------------MENU------------------" << endl;
        cout << "1- Adicionar estudante" << endl;
        cout << "2- Buscar estudante pelo nome " << endl;
        cout << "3- Sair " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            adicionarEstudante();
            break;
        case 2:
            buscarEstudante();
            break;
        case 3: 
            cout << "saindo...\n";
        default:
            cout << "Opcao invalida";
         } 
      }while (opcao != 3);

    } 

