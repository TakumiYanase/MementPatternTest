//=====================================================================
/// File Name	: Memento.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include "Memento.h"
//=====================================================================
Memento::Memento(const std::string& words) 
	: m_snapshot(words) 
{ 

}



Memento::~Memento() 
{ 

}



const std::string& Memento::GetSnapshot()
{
	return m_snapshot;
}