#ifndef PLAYER_H
#define PLAYER_H


using namespace std;
#include <string>

class player
{
  private:
  	string m_nome;
  	int m_agregado;

  public:
  	player();
  	player(string nome);

  	void setNome(string nome);
  	string getNome();

  	int getAgregado();

  	void AumenteAgregado(int c);

};

#endif