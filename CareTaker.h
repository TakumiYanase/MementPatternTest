//=====================================================================
/// File Name	: CareTaker.h
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#ifndef INCLUDE_CARE_TAKER
#define INCLUDE_CARE_TAKER
//=====================================================================
#include <vector>
#include "Originator.h"
#include "Memento.h"
//=====================================================================
class CareTaker
{
public:
	// �R���X�g���N�^
	CareTaker(Originator* originator);
	// �f�X�g���N�^
	~CareTaker();



public:
	void Save();
	void PutBack(int index);



private:
	// �����o�ϐ�
	Originator* m_originator;
	std::vector<Memento*> m_mementos;
};

#endif // INCLUDE_CARE_TAKER

