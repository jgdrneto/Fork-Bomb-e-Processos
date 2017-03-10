#include <string>
#include <vector>

using namespace std;

//Classe representativa de processos
class Processo{
  private:
  	//Atributos
  	string id;
  	string nome;
  	vector<Processo*> filhos;
  	string usuario;
  	string pai;

  public:

    /*  Descrição : Construtor da classe
     *
     *  @param string : Id do processo 
     *  @param string : Nome do processo
     *  @param string : Id do pai do processo
     *  @param string : id do usuário
     */
  	Processo(string nId,string nNome,string nPai, string nUsuario){
  		this->id = nId;
  		this->nome = nNome;
  		this->pai = nPai; 
      this->usuario = nUsuario;
  	}

    /*  Descrição : Obter o id do processo
     *
     *  @return string : Id do processo
     */
  	string getId(){
  		return this->id;	
  	}

    /*  Descrição : Obter o id do pai do processo
     *
     *  @return string : Id do pai do processo
     */
  	string getPai(){
  		return this->pai;
  	}

    /*  Descrição : Obter o nome do processo
     *
     *  @return string : Nome do processo
     */
  	string getNome(){
  		return this->nome;
  	}

    /*  Descrição : Obter os filhos do processo
     *
     *  @return vector<Processo*>* : Vetor com os endereços dos filhos do processo
     */
  	vector<Processo*>* getFilhos(){
  		return &(this->filhos);
  	}

    /*  Descrição : Obter o id do usuário do processo
     *
     *  @return string : Id do usuário do processo
     */
    string getUsuario() {
      return this->usuario;
    }


    /*  Descrição : Adicionar novo pai para o processo
     *
     *  @param string : Novo id do pai do processo
     */  
    void setPai(string nPai){
      this->pai = nPai;
    }

     /*  Descrição : Adicionar novo id para o processo
     *
     *  @param string : Novo id do processo
     */  
  	void setId(string nId){
  		this->id = nId;
  	}

    /*  Descrição : Adicionar novo nome para o processo
     *
     *  @param string : Novo nome do processo
     */ 
  	void setNome(string nNome){
  		this->nome = nNome;
  	}

    /*  Descrição : Adicionar novo usuário para o processo
     *
     *  @param string : Novo usuário do processo
     */ 
  	void setUsuario(string nUsuario){
  		this->usuario = nUsuario;
  	}

};	