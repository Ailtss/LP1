#ifndef DADO_H
#define DADO_H
#include <random>
using namespace std;
#include "player.h"

#define max_jogadores 3

class Dado
{
private:
	int m_valor;
	int m_totaljogadores;
	random_device m_rd;
	default_random_engine m_gen;
	uniform_int_distribution<> m_dis;

public:
	Dado();
	Dado(int a, int b);
	int jogar();
	int getValor();
    int getTotal();

};


#endif