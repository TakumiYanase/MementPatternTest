//=====================================================================
/// File Name	: Originator.h
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#ifndef INCLUDE_ORIGINATOR
#define INCLUDE_ORIGINATOR
//=====================================================================
#include <iostream>
#include <string>
#include "Memento.h"
#include "Singleton.h"
//=====================================================================
class Originator
{	
public:
	// �t�����h�錾
	friend class Singleton<Originator>;
	friend class CareTaker;



public:
	// �R���X�g���N�^
	Originator();
	// �f�X�g���N�^
	~Originator();



public:
	void Print() const;
	void Write(/*const std::string& words*/);



protected:
	Memento* CreateMemento();
	void SetMemento(Memento* memento);



private:
	// �����o�ϐ�
	std::string m_words;
};

#endif // INCLUDE_ORIGINATOR

