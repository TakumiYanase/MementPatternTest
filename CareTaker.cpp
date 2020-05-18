//=====================================================================
/// File Name	: CareTaker.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include "CareTaker.h"
//=====================================================================



//=====================================================================
// �R���X�g���N�^
//=====================================================================
CareTaker::CareTaker(Originator* originator)
	: m_originator(originator)
{ 

}



//=====================================================================
// �f�X�g���N�^
//=====================================================================
CareTaker::~CareTaker()
{
	std::vector<Memento*>::iterator it = m_mementos.begin();

	while (it != m_mementos.end()) 
	{
		delete (*it);
		++it;
	}
}



//=====================================================================
// ���݂̏�Ԃ�ۑ�
//=====================================================================
void CareTaker::Save()
{
	Memento* memento = m_originator->CreateMemento();
	// ���݂̏�Ԃ�ǉ�
	m_mementos.push_back(memento);
}



//=====================================================================
// �w�肳�ꂽ��Ԃ̃f�[�^��ݒ肷��
//=====================================================================
void CareTaker::PutBack(/*int index*/)
{
	SetTextColor(COLOR_DARK_BLUE);
	std::cout << "�� �� �� �� �� �� �� �� �� �� �� �� �� �� ��" << std::endl;
	std::cout << "���@�w�肵����Ԃɖ߂�       ��" << std::endl;
	std::cout << "�� �� �� �� �� �� �� �� �� �� �� �� �� �� ��" << std::endl;

	int index;
	std::cin >> index;

	if (index >= m_mementos.size()) return;

	Memento* memento = m_mementos[index];

	m_originator->SetMemento(memento);

	// ���͑҂�
	getchar();
}

