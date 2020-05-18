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
// メモリリークの検出の準備
#if _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif
//=====================================================================
int main()
{
	// メモリリークの検出
	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

	SetBackColor(COLOR_YELLOW);
	SetScreenSize(30, 30);

	std::unique_ptr<Originator> originator = std::make_unique<Originator>();
	std::unique_ptr<CareTaker> careTaker = std::make_unique<CareTaker>(originator.get());

	originator->Write();
	careTaker->Save(); // 最初の状態を記録（１世代目）

	originator->Write();
	careTaker->Save(); // ２世代目の状態を記録

	originator->Write();
	careTaker->Save(); // ３世代目の状態を記録

	// 最新の状態を表示
	originator->Print();

	for (;;)
	{
		ClearScreen();

		// 指定した状態に戻す
		careTaker->PutBack();

		// 最新の状態を表示
		originator->Print();
	}

	return 0;
}