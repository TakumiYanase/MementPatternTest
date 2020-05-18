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
	// フレンド宣言
	friend class Originator;



public:
	// デストラクタ
	~Memento();



protected:
	// コンストラクタ
	Memento(const std::string& words);

	const std::string& GetSnapshot();



private:
	// メンバ変数
	std::string m_snapshot;
};

#endif // INCLUDE_MEMENTO

