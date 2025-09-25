#include <iostream>
#include <list>

using namespace std;

class SerVivo {
  protected:
    string nome;

  public:
    SerVivo(string nome) {
      this->nome = nome;
    }

    virtual void apresentar(){
      cout << "Sou um ser vivo e meu nome é " << this->nome << "." << endl;
    }
};

class Humano : public SerVivo {
  private:
    string nome;

  public:
    Humano(string nome) : SerVivo(nome) {
      this->nome = nome;
    }

    void apresentar(){
      cout << "Sou um humano e meu nome é " << this->nome << "." << endl;
    }
};

class Elfo : public SerVivo {
  private:
    string nome;

  public:
    Elfo(string nome) : SerVivo(nome) {
      this->nome = nome;
    }

    void apresentar(){
      cout << "Sou um elfo e meu nome é " << this->nome << "." << endl;
    }
};

class Fada : public SerVivo {
  private:
      string nome;

  public:
      Fada(string nome) : SerVivo(nome) {
      this->nome = nome;
    }

    void apresentar(){
      cout << "Sou uma fada e meu nome é " << this->nome << "." << endl;
    }
};

int main() {
  list<SerVivo*> serVivoList;
  
  Humano humano = Humano("Guts");
  Elfo elfo = Elfo("Ivalera");
  Fada fada = Fada("Puck");

  serVivoList.push_back(&humano);
  serVivoList.push_back(&elfo);
  serVivoList.push_back(&fada);

  for(SerVivo* serVivo : serVivoList){
    serVivo->apresentar();
  }

	return 0;
}
