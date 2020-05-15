//=====================================================================
/// File Name	: Originator.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include "Originator.h"
//=====================================================================
Originator::Originator() : m_words("")
{

}



Originator::~Originator() 
{ 

}



void Originator::Write(const std::string& words)
{
	m_words += words;
}



Memento* Originator::CreateMemento()
{
	return new Memento(m_words);
}



void Originator::SetMemento(Memento* memento)
{
	m_words = memento->GetSnapshot();
}



void Originator::Print() const
{
	std::cout << "******************" << std::endl;
	std::cout << m_words << std::endl;
}
