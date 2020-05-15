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

	originator->Write("‚P¢‘ã\n");
	caretaker->Save(); // Å‰‚Ìó‘Ô‚ð‹L˜^i‚P¢‘ã–Új

	originator->Write("‚Q¢‘ã\n");
	caretaker->Save(); // ‚Q¢‘ã–Ú‚Ìó‘Ô‚ð‹L˜^

	originator->Write("‚R¢‘ã");
	caretaker->Save(); // ‚R¢‘ã–Ú‚Ìó‘Ô‚ð‹L˜^
	originator->Print();

	// ‚Q¢‘ã‚Ìó‘Ô‚ÉƒZƒbƒg
	caretaker->PutBack(1);
	originator->Print();

	// Å‰‚Ìó‘Ô‚ÉƒZƒbƒg
	caretaker->PutBack(0);
	originator->Print();

	// ‚R¢‘ã–Ú‚Ìó‘Ô‚É–ß‚·
	caretaker->PutBack(2);
	originator->Print();

	delete caretaker;
	delete originator;

	return 0;
}