//=====================================================================
/// File Name	: main.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include <iostream>
#include <memory>
#include "Console.h"
#include "Originator.h"
#include "CareTaker.h"
#include "Memento.h"
//=====================================================================
// ���������[�N�̌��o�̏���
#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif
//=====================================================================
int main()
{
	// ���������[�N�̌��o
	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

	SetBackColor(COLOR_YELLOW);
	SetScreenSize(30, 30);

	std::unique_ptr<Originator> originator = std::make_unique<Originator>();
	std::unique_ptr<CareTaker> careTaker = std::make_unique<CareTaker>(originator.get());

	originator->Write();
	careTaker->Save(); // �ŏ��̏�Ԃ��L�^�i�P����ځj

	originator->Write();
	careTaker->Save(); // �Q����ڂ̏�Ԃ��L�^

	originator->Write();
	careTaker->Save(); // �R����ڂ̏�Ԃ��L�^

	// �ŐV�̏�Ԃ�\��
	originator->Print();

	for (;;)
	{
		ClearScreen();

		// �w�肵����Ԃɖ߂�
		careTaker->PutBack();

		// �ŐV�̏�Ԃ�\��
		originator->Print();
	}

	return 0;
}