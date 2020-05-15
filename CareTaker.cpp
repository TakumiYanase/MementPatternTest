//=====================================================================
/// File Name	: CareTaker.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include "CareTaker.h"
//=====================================================================
CareTaker::CareTaker(Originator* originator)
	: m_originator(originator)
{ 

}



CareTaker::~CareTaker()
{
	std::vector<Memento*>::iterator it = m_mementos.begin();

	while (it != m_mementos.end()) 
	{
		delete (*it);
		++it;
	}
}



void CareTaker::Save()
{
	Memento* memento = m_originator->CreateMemento();
	m_mementos.push_back(memento);
}



void CareTaker::PutBack(int index)
{
	if (index >= m_mementos.size()) return;

	Memento* memento = m_mementos[index];

	m_originator->SetMemento(memento);
}

