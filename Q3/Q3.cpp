/**
 * @file Q3_Implementação.cpp
 * @brief Questão 3- LP I - Implementação da classe Aluno e Turma
 * @author Douglas Felipe de Lima Silva (20220054131)
 * @since 27/04/2023
 * @date 03/05/2023
*/

//Cabeçalho (INCLUIR AS BIBLIOTECAS)
#include <iostream> //incluir já por padrão
using namespace std; // P/ evitar repetições do sts
#include <string> //Utilizada para criar o vetor de alunos
#include <vector> //Utilizada para criar o vetor de alunos
#include <algorithm> //Utilizada para aplicar o sor



class Aluno {
public:
    int matricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
    
     /**
     * @brief Construtor da classe Aluno
     * @param matricula Número de matrícula do aluno
     * @param nome Nome do aluno
    * @param nota 
     */
    Aluno(int matricula, string nome, float nota1, float nota2, float nota3) 
    {
        this->matricula = matricula;
        this->nome = nome;
        this->nota1 = nota1;
        this->nota2 = nota2;
        this->nota3 = nota3;
    }
    
      /**
     * @brief Método para calcular a média do aluno
      */
    float calculaMedia() const 
    {
        return (nota1 + nota2 + nota3) / 3;
    }
};

/**
 * @brief Construtor da classe Turma
*/

class Turma 
{
public:
    int capacidade;
    int vagas;
    vector<Aluno*> alunos;
    
    /**
     * @brief construtor que inicializa a capacidade e vagas e aloca o vetor de alunos
     *  @param capacidade Número de alunos que a turma pode alocar
     */

    Turma(int capacidade) 
    {
        this->capacidade = capacidade;
        vagas = capacidade;
        for (int i = 0; i < capacidade; i++) 
        {
            alunos.push_back(nullptr);
        }
    }
    
    /**
     * @brief Destrutor da Turma
     */

    ~Turma() 
    {
        for (auto aluno : alunos)
        {
            delete aluno;
        }
    }
    
     /**
     * @brief Método para alocar um aluno na turma
    * @return Verdadeiro se a alocação foi realizada com sucesso, falso se o contrário
     */

    bool alocaAlunos(int matricula, string nome, float nota1, float nota2, float nota3)
     {
        if (vagas == 0) 
        {
            cout << "Turma está cheia" << endl;
            return false;
        }
        for (auto& aluno : alunos) 
        {
            if (aluno == nullptr)
             {
                aluno = new Aluno(matricula, nome, nota1, nota2, nota3);
                vagas--;
                cout << "Aluno alocado" << endl;
                return true;
            }
        }
        return false;
    }
    
    // método para imprimir a lista de alunos
    void imprimeAlunos() const 
    {
        for (auto aluno : alunos)
         {
            if (aluno != nullptr)
            {
                cout << "Matrícula: " << aluno->matricula << ", Nome: " << aluno->nome
                          << ", Média: " << aluno->calculaMedia() << endl;
            }
        }
    }
    
     /**
     * @brief método para ordenar a lista de alunos pelos campos fornecidos
    * @return os campos de forma ordenada pelo selection sort
     */
    
    void ordenaCampo(string campo) 
    {
        if (campo == "matricula") 
        {
            sort(alunos.begin(), alunos.end(), [](Aluno* a, Aluno* b) 
            {
                return a->matricula < b->matricula;
            });
        } else if (campo == "nome") 
        {
            sort(alunos.begin(), alunos.end(), [](Aluno* a, Aluno* b) 
            {
                return a->nome < b->nome;
            });
        } else if (campo == "media") {
            sort(alunos.begin(), alunos.end(), [](Aluno* a, Aluno* b) 
            {
                return a->calculaMedia() < b->calculaMedia();
            });
        } else 
        {
            cout << "Informação inválida" << endl;
        }
    }
};



int main() 
{
    Turma turma(5);
    
    // cadastra alunos
    turma.alocaAlunos(2022554478, "Frodo", 7.5, 8, 9);
    turma.alocaAlunos(2022264587, "Vegeta", 6.0, 5, 6);
    turma.alocaAlunos(2021021547, "Goku", 8.5, 9, 10);
    turma.alocaAlunos(2022235648, "Luffy", 5, 5, 7);
    turma.alocaAlunos(2022248797, "Eren", 0, 3, 10);
    
    // imprime lista de alunos antes da ordenação
    std::cout << "Lista antes da ordenação:" << std::endl;
    turma.imprimeAlunos();
    
    // ordena por matrícula
    turma.ordenaCampo("matricula");
    std::cout << std::endl << "Ordenado por matrícula:" << std::endl;
    turma.imprimeAlunos();
    
    // ordena por nome
    turma.ordenaCampo("nome");
    std::cout << std::endl << "Ordenado por nome:" << std::endl;
    turma.imprimeAlunos();
    
    // ordena por média
    turma.ordenaCampo("media");
    std::cout << std::endl << "Ordenado por média:" << std::endl;
    turma.imprimeAlunos();
    
    return 0;
}
