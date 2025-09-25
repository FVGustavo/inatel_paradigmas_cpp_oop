#include <iostream>

using namespace std;

class Pessoa {
  protected:
    string nome;

  public:
    Pessoa(string nome){
      this->nome = nome;
    }

    virtual void apresentar(){
      cout << "Olá, meu nome é " << this->nome << " e eu sou uma pessoa." << endl;
    }
};

class Professor : public Pessoa {
  private:
    string disciplina;

  public:
    Professor(string nome, string disciplina) : Pessoa(nome){
      this->nome = nome;
      this->disciplina = disciplina;
    }

    void apresentar(){
      cout << "Olá, meu nome é " << this->nome << " e eu sou um professor de " << this->disciplina << "." << endl;
    }
};

class Aluno : public Pessoa {
  private:
    string curso;
    int matricula;

  public:
    Aluno(string nome, string curso, int matricula) : Pessoa(nome){
      this->nome = nome;
      this->curso = curso;
      this->matricula = matricula;
    }

    void apresentar(){
      cout << "Olá, meu nome é " << this->nome << " e eu sou um aluno de " << this->curso << "." << endl;
    }
};

int main(){
  Pessoa* pessoa_01 = new Professor("Marcelo Cysneiros", "Paradigmas");
  Pessoa* pessoa_02 = new Aluno("Gustavo Ferreira Vieira", "Software", 620);
  
  pessoa_01->apresentar();
  
  cout << endl;
  
  pessoa_02->apresentar();
  
  return 0;
}
