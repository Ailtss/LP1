#include "player.h"

using namespace std;


player::player()
{

}

player::player(string nome)
{
	m_nome = nome;
}

void player::setNome(string nome)
{
	m_nome = nome;
}

string player::getNome()
{
	return m_nome;
}

int player::getAgregado()
{
	return m_agregado;
}

void player::AumenteAgregado(int c)
{
	m_agregado = m_agregado + c;

}