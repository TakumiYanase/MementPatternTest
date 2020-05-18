//=====================================================================
/// File Name	: CareTaker.h
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#ifndef INCLUDE_CARE_TAKER
#define INCLUDE_CARE_TAKER
//=====================================================================
#include <vector>
#include "Console.h"
#include "Originator.h"
#include "Memento.h"
#include "Singleton.h"
//=====================================================================
class CareTaker
{
public:
	// �t�����h�錾
	friend class Singleton<CareTaker>;



public:
	// �R���X�g���N�^
	CareTaker(Originator* originator);
	// �f�X�g���N�^
	~CareTaker();



public:
	void Save();
	void PutBack(/*int index*/);



private:
	// �����o�ϐ�
	Originator* m_originator;
	std::vector<Memento*> m_mementos;
};

#endif // INCLUDE_CARE_TAKER

