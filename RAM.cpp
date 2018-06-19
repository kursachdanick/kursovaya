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
using namespace std;

OP::OP() {
	cout << "Введите производителя:\n";
	cin >> proizvoditel;
	cout << "Введите модель:\n";
	cin >> model;
	cout << "Введите объём:\n";
	cin >> volume_memory;
	cout << "Кэш:\n";
	cin >> cache;
	cout << "Введите тип памяти:\n";
	cin >> type_memory;
}

void OP::Vivod_in_not_fail() {
	cout << endl << "Производитель - " << proizvoditel << endl;
	cout << "Модель - " << model << endl;
	cout << "Объём - " << volume_memory << endl;
	cout << "Кэш - " << cache << endl;
	cout << "Тип памяти - " << type_memory << endl;
	cout << "Информация записана в файл: RAM.txt"<< endl << endl;
}

void OP::Vivod_in_fail() {
	ofstream file1("RAM.txt", ios_base::app);
	file1 << endl << "Производитель - " << proizvoditel << endl;
	file1 << "Модель - " << model << endl;
	file1 << "Объём - " << volume_memory << endl;
	file1 << "Кэш - " << cache << endl;
	file1 << "Тип памяти - " << type_memory << endl;
	file1.close();
}
