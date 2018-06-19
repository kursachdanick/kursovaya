#include "Video.h"
#include "sborka.h"
#include "proczessor.h"
#include "MP.h"
#include "box.h"
#include "HDD.h"
#include "RAM.h"
#include "Sound.h"
#include "Privod.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

Sborka::~Sborka() {}

void Sborka::Create_Sborka() {
	cout << "Выберите запчасть:\n";
	cout << "|1| - Процессор\n";
	cout << "|2| - Материнка\n";
	cout << "|3| - Видеокарта\n";
	cout << "|4| - ОП\n";
	cout << "|5| - ЖД\n";
	cout << "|6| - Корпус\n";
	cout << "|7| - Звуковая карта\n";
	cout << "|8| - Приводы\n";
	cout << "|0| - Назад\n";
	cin >> comp;
	switch (comp) {
	case 1: {
		proczsessor * comp_1 = new proczsessor();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 2: {
		MP * comp_1 = new MP();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 3: {
		video * comp_1 = new video();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 4: {
		OP * comp_1 = new OP();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 5: {
		ZD * comp_1 = new ZD();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 6: {
		box * comp_1 = new box();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 7: {
		sound * comp_1 = new sound();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
    case 8: {
		privod * comp_1 = new privod();
		comp_1->Vivod_in_not_fail();
		comp_1->Vivod_in_fail();
		delete comp_1;
		break;
	}
	case 0: break;
	}
}

Sborka::~Sborka() {
	cout << "Конец работы!";
}
