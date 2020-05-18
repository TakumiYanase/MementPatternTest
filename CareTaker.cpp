//=====================================================================
/// File Name	: CareTaker.cpp
/// Date		: 2020.05.15
/// Author		: Takumi Yanase
//=====================================================================
#include "CareTaker.h"
//=====================================================================



//=====================================================================
// コンストラクタ
//=====================================================================
CareTaker::CareTaker(Originator* originator)
	: m_originator(originator)
{ 

}



//=====================================================================
// デストラクタ
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
// 現在の状態を保存
//=====================================================================
void CareTaker::Save()
{
	Memento* memento = m_originator->CreateMemento();
	// 現在の状態を追加
	m_mementos.push_back(memento);
}



//=====================================================================
// 指定された状態のデータを設定する
//=====================================================================
void CareTaker::PutBack(/*int index*/)
{
	SetTextColor(COLOR_DARK_BLUE);
	std::cout << "┏ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ┓" << std::endl;
	std::cout << "┃　指定した状態に戻す       ┃" << std::endl;
	std::cout << "┗ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ┛" << std::endl;

	int index;
	std::cin >> index;

	if (index >= m_mementos.size()) return;

	Memento* memento = m_mementos[index];

	m_originator->SetMemento(memento);

	// 入力待ち
	getchar();
}

