//=====================================================================
/// File Name	: Singleton.h
/// Date		: 2019.06.01
/// Author		: Takumi Yanase
//=====================================================================
#ifndef INCLUDE_SINGLETON
#define INCLUDE_SINGLETON
//=====================================================================
template<class T>
class Singleton
{
public:
	static inline T* GetInstance()
	{
		static T instance;
		return &instance;
	}



protected:
	Singleton() {} 
	virtual ~Singleton() {}



private:
	void operator=(const Singleton& obj) {} 
	Singleton(const Singleton &obj) {} 
};

#endif // INCLUDE_SINGLETON
