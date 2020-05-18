//=====================================================================
/// File Name	: Memento.h
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#ifndef INCLUDE_MEMENTO
#define INCLUDE_MEMENTO
//=====================================================================
#include <string>
//=====================================================================
class Memento
{
public:
	// �t�����h�錾
	friend class Originator;



public:
	// �f�X�g���N�^
	~Memento();



protected:
	// �R���X�g���N�^
	Memento(const std::string& words);

	const std::string& GetSnapshot();



private:
	// �����o�ϐ�
	std::string m_snapshot;
};

#endif // INCLUDE_MEMENTO

