#include <iostream>

using namespace std;

class Personagem {
  public:
    string nome;
    int nivel;
    int dano;
    int vida;
  
  Personagem(string nome, int nivel, int dano, int vida){
    this->nome = nome;
    this->nivel = nivel;
    this->dano = dano;
    this->vida = vida;
  }
  
  void atacar(Personagem* personagemAtacado, int dano){
    cout << this->nome << " atacou " << personagemAtacado->nome << "." << endl;
    cout << personagemAtacado->nome << " perdeu " << dano << " pontos de vida." << endl;
    cout << endl;
    personagemAtacado->vida -= dano;
  }
};

int main(){
  Personagem* personagem_01 = new Personagem("Verso", 33, 250, 2000);
  Personagem* personagem_02 = new Personagem("Maelle", 33, 300, 2400);
  
  personagem_01->atacar(personagem_02, 100);
  
  cout << "<Personagem 1>" << endl;
  cout << "Nome: " << personagem_01->nome << endl;
  cout << "Nivel: " << personagem_01->nivel << endl;
  cout << "Dano: " << personagem_01->dano << endl;
  cout << "Vida: " << personagem_01->vida << endl;
  
  cout << endl;
  
  cout << "<Personagem 2>" << endl;
  cout << "Nome: " << personagem_02->nome << endl;
  cout << "Nivel: " << personagem_02->nivel << endl;
  cout << "Dano: " << personagem_02->dano << endl;
  cout << "Vida: " << personagem_02->vida << endl;

  return 0;
}
