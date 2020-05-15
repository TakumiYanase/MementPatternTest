//=====================================================================
/// File Name	: main.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include <iostream>
#include "Originator.h"
#include "CareTaker.h"
#include "Memento.h"
//=====================================================================
int main()
{
	Originator* originator = new Originator();
	CareTaker* caretaker = new CareTaker(originator);

	originator->Write("�P����\n");
	caretaker->Save(); // �ŏ��̏�Ԃ��L�^�i�P����ځj

	originator->Write("�Q����\n");
	caretaker->Save(); // �Q����ڂ̏�Ԃ��L�^

	originator->Write("�R����");
	caretaker->Save(); // �R����ڂ̏�Ԃ��L�^
	originator->Print();

	// �Q����̏�ԂɃZ�b�g
	caretaker->PutBack(1);
	originator->Print();

	// �ŏ��̏�ԂɃZ�b�g
	caretaker->PutBack(0);
	originator->Print();

	// �R����ڂ̏�Ԃɖ߂�
	caretaker->PutBack(2);
	originator->Print();

	delete caretaker;
	delete originator;

	return 0;
}