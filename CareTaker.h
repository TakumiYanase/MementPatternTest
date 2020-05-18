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
	// フレンド宣言
	friend class Singleton<CareTaker>;



public:
	// コンストラクタ
	CareTaker(Originator* originator);
	// デストラクタ
	~CareTaker();



public:
	void Save();
	void PutBack(/*int index*/);



private:
	// メンバ変数
	Originator* m_originator;
	std::vector<Memento*> m_mementos;
};

#endif // INCLUDE_CARE_TAKER

