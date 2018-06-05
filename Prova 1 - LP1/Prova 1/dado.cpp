#include "dado.h"
#include <random>

Dado::Dado():m_gen(m_rd()), m_dis(1, 6)
{
	m_valor = round(m_dis(m_gen));
}

Dado::Dado(int a, int b):m_gen(m_rd()), m_dis(a, b) //Construtor feito para adequar ao número de faces de cada dado.
{
	m_valor = round(m_dis(m_gen));
}

int Dado::jogar()
{
	m_valor = round(m_dis(m_gen));
	return m_valor;
}

int Dado::getValor()
{
	return m_valor;
}

int Dado::getTotal()
{
	return m_totaljogadores;
}

