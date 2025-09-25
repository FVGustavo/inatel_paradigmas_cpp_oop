#include <iostream>

using namespace std;

class Pessoa {
  protected:
    string nome;
    int idade;

  public:
    Pessoa(string nome, int idade){
      this->nome = nome;
      this->idade = idade;
    }

    void setNome(string nome){
      this->nome = nome;
    }

    string getNome(){
      return this->nome;
    }

    void setIdade(int idade){
      this->idade = idade;
    }

    int getIdade(){
      return this->idade;
    }
};

class Protagonista : public Pessoa {
  private:
    int nivel;

  public:
    Protagonista(string nome, int idade, int nivel) : Pessoa(nome, idade){
      this->nome = nome;
      this->idade = idade;
      this->nivel = nivel;
    }

    void setNivel(int nivel){
      this->nivel = nivel;
    }

    int getNivel(){
      return this->nivel;
    }
};

class Personagem : public Pessoa {
  private:
    int rank;

  public:
    Personagem(string nome, int idade, int rank) : Pessoa(nome, idade){
      this->nome = nome;
      this->idade = idade;
      this->rank = rank;

      if(rank < 0 || rank > 10){
        cout << "Rank de personagem deve ser um valor entre 0 e 10" << endl;
        this->rank = 0;
      }else{
        this->rank = rank;
      }
    }

    void setRank(int rank){
      this->rank = rank;
    }

    int getRank(){
      return this->rank;
    }
};

int main(){
  Protagonista protagonista_01 = Protagonista("Makoto Yuki", 16, 99);
  Personagem personagem_01 = Personagem("Sanada Akihiko", 17, 9);
  
  cout << "<Protagonista>" << endl;
  cout << "Nome: " << protagonista_01.getNome() << endl;
  cout << "Idade: " << protagonista_01.getIdade() << endl;
  cout << "Nivel: " << protagonista_01.getNivel() << endl;
  
  cout << endl;
  
  cout << "<Personagem>" << endl;
  cout << "Nome: " << personagem_01.getNome() << endl;
  cout << "Idade: " << personagem_01.getIdade() << endl;
  cout << "Rank: " << personagem_01.getRank() << endl;
  
  return 0;
}
